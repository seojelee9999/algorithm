#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> b(m);
    vector<int> a(n);

    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < m; i++) cin >> b[i];

    unordered_map<int,int> c;
    for (int i = 0 ; i < n ; i++){
        c[a[i]]++;
    }
    int ans = 0;
    for (int i = 0 ; i< m ; i++){
        unordered_map<int,int>::iterator it = c.find(b[i]);
        if (it != c.end()) ans += (*it).second;
    }
    cout << ans;


}