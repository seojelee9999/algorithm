#include <bits/stdc++.h>

using namespace std;
long long INF = 1e9; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0 ; i < n ;i++) cin >> a[i];
    vector<int> b;
    vector<int> c(n);
    for (int i = 0 ; i < n ; i++){
        for (int j = i ; j < n ; j++){
            if (a[i] + a[j] <= m) b.push_back(a[i] + a[j]);
        }
    }
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0 ; i < b.size() ; i++){
        vector<int>::iterator it = upper_bound(b.begin(), b.end(), m-b[i]);
        if (it!= b.begin()) ans = max(ans, *(--it) + b[i]);
    }
    cout << ans;
}