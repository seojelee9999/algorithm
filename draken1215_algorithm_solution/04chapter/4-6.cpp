#include <bits/stdc++.h>

using namespace std;

vector <int> a;
vector<vector<int>> memo;

bool solve(int i , int w){
    if (i == 0){
        if (w == 0) return true;
        return false;
    }
    if (memo[i][w] != -1) return memo[i][w];

    return memo[i][w] = solve(i - 1, w) || solve(i -1, w- a[i-1]);
}

int main(){

    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    memo.assign(n+1, vector<int>(w+1,-1));

    
}