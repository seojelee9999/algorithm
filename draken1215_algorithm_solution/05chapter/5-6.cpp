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
    vector <int> m(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < n ; i++) cin >> m[i];

    vector<vector<long long>> dp(n+1, vector<long long>(w+1, INF));
    dp[0][0] = 0;
    for (int i = 1 ; i <= n; i++){
        for (int j = 0; j <= w; j++){
            if (dp[i-1][j] < INF){
                dp[i][j] = 0;
            }
            else if (j >= a[i-1] && dp[i][j-a[i-1]] < m[i-1]){
                dp[i][j] = dp[i][j-a[i-1]] + 1;
            }
            
        }
    }   
    cout << (dp[n][w] != INF ? "Yes" : "No");
    


}