#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;
    vector<int> flip(n+1,0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        flip[a]++;
        flip[b+1]--;
    }
    for (int i =1; i < n; i++){
        flip[i] += flip[i-1];
    }
    for (int i = 0 ; i < n ; i++){
        if (flip[i] % 2) cout << t[i];
        else cout << s[i];
    }

}