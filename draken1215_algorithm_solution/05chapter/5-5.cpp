#include <bits/stdc++.h>

using namespace std;


template <class T> void chmin(T &a , T b){
    if (a > b) a = b;
}

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,w,k;
    cin >> n >> w ;
    vector <long long> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    vector<bool> dp(w+1, false);
    dp[0] = true;
    for (int i = 1 ; i <= w ; i++){
        for (int j = 0 ; j < n; j++){
            if (i >= a[j] && dp[i-a[j]]){
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[w] ? "Yes" : "No") << "\n";


}