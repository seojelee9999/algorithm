#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll stl(string s){
    ll res = 0;
    int len = s.length();
    for (int i = 0 ; i < len; i++){
        char k  = s[i];
        res *= 10;
        res += (k-'0');
    }
    return res;
}

ll sol(){
    string s;
}



int main(){

    string s;
    cin >> s;
    int n = s.size();
    ll res = 0;
    for (int i = 0 ; i < n ; i++){
        string offset = s.substr(0,i+1);
    
        for (int j = i + 1; j< n; j++){
            string left = s.substr(i+1,j-(i+1));
           
            string right = s.substr(j);
            
            res += stl(left) + stl(right) + stl(offset);      
        }
    }
    res += stl(s);
    cout << res;
}