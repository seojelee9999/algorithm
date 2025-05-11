#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N = 10;
    int v = 5;
    int res = 0;
    vector<int> a{1,2,3,4,5,6,7,8,8,1};
    for (int i = 0 ; i < N; i++){
        if (a[i] == v)
            res++;
    }
    
    cout << res;
}