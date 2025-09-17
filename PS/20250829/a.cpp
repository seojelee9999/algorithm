#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    vector<string> v(x+1);
    for (int i = 1 ; i <= x; i++){
        cin >> v[i];
    }
    string s;
    cin >> x >> s;
    if (v[x] == s){
        cout << "Yes";
    }
    else cout << "No";
}