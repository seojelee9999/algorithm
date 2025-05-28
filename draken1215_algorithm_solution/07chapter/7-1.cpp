#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0 ; i  < n ; i++) cin >> a[i];
    for (int i = 0 ; i  < n ; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i{};
    for (int j = 0 ; j < n; j++){
        if (a[i] < b[j]) i++;
    }
    cout << i;


}