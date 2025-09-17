#include <bits/stdc++.h>

using namespace std;

bool isEqualTo(string a, string b){
    if (a.length() != b.length()) return false;
    int i = 0;
    while (i < a.length()){
        if (a[i] != b[i]) return false;
        i++;
    }
    return true;
}

int main(){
    string s;

    cin >> s;

    if (isEqualTo(s,"red")) cout << "SSS";
    else if (isEqualTo(s,"blue")) cout << "FFF";
    else if (isEqualTo(s, "green")) cout << "MMM";
    else cout << "Unknown";


}