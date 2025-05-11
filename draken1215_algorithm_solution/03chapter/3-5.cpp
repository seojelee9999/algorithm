#include<bits/stdc++.h>

using namespace std;

int divide_by2(int x){
    int ret = 0;
    while ((x % 2) == 0){
        ret++;
        x /= 2;
    }
    return ret;
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> v(N);
    int res = 0;
    for (int i = 0 ; i < N; i++) cin >> v[i];

    for (int i = 0 ; i < N ; i++){
        int x = divide_by2(v[i]);
        if (!x){
            res = -1;
            break;
        }
        res += x;
    }

    cout << res;
}