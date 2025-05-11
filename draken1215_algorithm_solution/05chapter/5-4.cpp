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
    cin >> n >> w >> k;
    vector <long long> a(n+1);
    for (int i = 1 ; i <= n ; i++) cin >> a[i];

    vector<vector<long long>> dp(n+1, vector<long long>(w+1, INF));
    dp[0][0] = 0;
    for (int i = 1 ; i  <= n ; i++){
        for (int j = 0 ; j <= w; j++){
            dp[i][j] = dp[i-1][j];

            if (j >= a[i]){
                chmin(dp[i][j], dp[i-1][j-a[i]] + 1);
            }
            
        }
    }
    int ans = 0;
    for (int i = 0 ; i <= n; i++){
        if (dp[i][w] <= k) ans++;
    }
    cout << (ans ? "Yes" : "NO");

    return 0;
}