#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin  >> n;
    vector<int> v(n);
    for (int i = 0 ; i < n ; i++) cin >> v[i];

    int min = 0x7fff;
    int max = -2147483648;
    for (int i = 0 ; i < n ; i++){
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    cout << max -min;
}