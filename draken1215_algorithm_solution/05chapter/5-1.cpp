#include <bits/stdc++.h>

using namespace std;

template <class T> void chmax(T &a, T b){
    if (a  < b) a = b;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> a(N + 1, vector<int>(3));
    for (int i = 1 ; i <= N; i++){
        for (int j = 0 ; j < 3 ; j++) cin >> a[i][j];
    }

    vector<vector<int>> dp(N+1, vector<int>(3, 0));

    for (int i = 1 ; i <= N; i++){
       for (int j = 0 ; j < 3 ; j++){
            dp[i][j] = max(dp[i-1][(j+1) % 3] + a[i][j], dp[i-1][(j+2) % 3] + a[i][j]);
       } 
    }
    int ans{};

    for (int i = 0 ; i < 3 ; i++) chmax(ans, dp[N][i]);
    cout << ans;
    return 0;

}