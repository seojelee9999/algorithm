#include <bits/stdc++.h>

using namespace std;


int main(){


    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end(), [](pair<int,int> x, pair<int, int> y){
        return x.second < y.second;
    });
    bool ans = true;
    int accumulate = 0;
    for (int i = 0 ; i < n  ; i++){
        accumulate += a[i].first;
        if (a[i].second < accumulate){
            ans = false;
            break;
        }
        
    }
    cout << ans;

    



}