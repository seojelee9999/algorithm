#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    unordered_set<int> s(a.begin(), a.end());
    int ans{};
    for (int i = 0 ; i< m ; i++){
        if (s.count(b[i])){
            ans++;
        }
    }  
    cout << ans;
    return 0;


}