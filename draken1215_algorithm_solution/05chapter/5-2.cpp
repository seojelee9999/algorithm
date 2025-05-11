#include <bits/stdc++.h>

using namespace std;

template <class T> void chmax(T &a, T b){
    if (a  < b) a = b;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,w;
    cin >> n >> w;
    vector <int> a(n+1);
    for (int i = 1 ; i <= n ; i++) cin >> a[i];

    vector<vector<bool>> dp(n+1, vector<bool>(w+1, false));
    dp[0][0] = true;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 0 ; j <= w; j++){
            dp[i][j] = dp[i-1][j]; // i번쨰 아이템 선택안하는경우
            if (j >= a[i]) dp[i][j] = dp[i][j] | dp[i-1][j-a[i]]; //i번쨰 아이템 선택하는 경우
        }
    }
    cout << (dp[n][w] ? "Yes" : "NO");
    return 0;


}