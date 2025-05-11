#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

    int n, m;
    cin >> n >> m;
    vector<int> a(n+1);
    for (int i = 1 ; i <= n ; i++) cin >> a[i];

    vector<vector<double>> dp(n+1,vector<double>(m+1));
    vector<long long> p_sum(n+1,0);
    for (int i = 1 ; i <= n; i++) p_sum[i] = p_sum[i-1] + a[i];

    for (int i = 1 ; i <= n; i++){
        dp[i][1] = p_sum[i] / static_cast<double>(i);
        for (int j =2 ; j <= min(m,i); j++){
            for (int k = j-1 ; k < i; k++){
                dp[i][j] = max(dp[i][j], dp[k][j-1] + (p_sum[i]-p_sum[k]) / static_cast<double>(i-k));
            }
        }
    }
    cout << fixed << setprecision(6) << dp[n][m];
    


}