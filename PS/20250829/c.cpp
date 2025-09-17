#include <bits/stdc++.h>

using namespace std;
int main(){
    int x;
    cin >> x;
    string s;
    cin >> s;

    vector<int> v1(x), v2(x);
    for (int i = 0 ; i < x; i++){
        v1[i] = 2*i;
        v2[i] = 2*i+1;
    }
    
    vector<int> a;
    for(int i = 0 ; i< s.length(); i++){
        if (s[i] == 'A') a.push_back(i);
    }
    long long cnt1 = 0, cnt2= 0;

    for (int i = 0 ; i < x; i++){
        cnt1 += abs(v1[i]- a[i]);
        cnt2 += abs(v2[i] - a[i]);
    }

    long long ans = cnt1 > cnt2 ? cnt2 : cnt1;
    cout << ans;


}