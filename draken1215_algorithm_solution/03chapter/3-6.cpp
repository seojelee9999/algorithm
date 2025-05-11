#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int K,N;
    cin >> K >> N;

    int x,y,z;
    int res = 0;

    for (int i = 0 ; i <= K; i ++){
        for (int j = 0 ; j <= K; j++){
            if (i+j > N) break;
            if (N - i - j <= K) res++;
        }
    }
    cout << res;


}