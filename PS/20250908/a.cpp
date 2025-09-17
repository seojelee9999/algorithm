#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int x, y;

    cin >> s;
    x = s[0]-'0';
    y = s[2] -'0';

    if (y == 8){
        x += 1; y= 1;
    }
    else y+=1;
    cout << x << "-" << y;
    
}