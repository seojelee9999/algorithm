#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll rev(ll x){
    ll ret = 0;

    while (x > 0){
        ret = ret * 10 + x % 10;
        x /= 10;
    }
    return ret;
}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;

    cin >> x >> y;
    vector<ll> v(11);
    v[1] = x;
    v[2] = y;
    for (int i = 3 ; i <= 10; i++){
        v[i] = rev(v[i-1] + v[i-2]);
    }
    cout << v[10];
    
}