#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    for (int i = 0 ; i< n ; i++) cin >> a[i];
    for (int i = 0 ; i < m; i++) cin >> b[i];
    int ans = 0;
    unordered_set<int> f(a.begin(),a.end());
    for (int i = 0 ; i < m ; i++){
        if (f.count(k-b[i])){
            ans = 1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;

}