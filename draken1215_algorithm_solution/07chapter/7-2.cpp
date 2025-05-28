#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second 
int main(){


    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<pair<int , int>> b(n);
    for (int i = 0 ; i < n; i++) cin>> a[i].x >> a[i].y;
    for (int i = 0 ; i < n ; i++) cin >> b[i].x >> b[i].y;

    int i{}, j{}, ans{};
    set<int> s;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while (j < n){
        if (i < n && a[i].first < b[j].second) s.insert(a[i++].second);
        else{
            set<int>::iterator it = s.lower_bound(b[j++].second);
            if (it != s.begin()){
                s.erase(--it);
                ans++;
            }

        }
    }
    cout << ans;

    return 0;



}