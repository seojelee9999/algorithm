#include <bits/stdc++.h>

using namespace std;



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    string s;
    cin >> s;

    vector<pair<int,int>> v;
    v.reserve(s.size()/2);
    stack<int> st;
    for (int i = s.size()-1 ; i >= 0 ; i--){
        if (s[i] == ')') st.push(i);
        else{
            if (st.empty()) break;
            v.push_back({i,st.top()}); st.pop();
        }
    }
    if (v.size() == s.size()/2){
        cout << "Yes" << '\n';
        reverse(v.begin(), v.end());
        for (auto x : v){
            cout << "(" << x.first << ", " << x.second << ")\n";
        }
    }
    else cout << "No";
    return 0;
    
    
}