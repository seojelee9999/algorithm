#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,worst,second;
    cin >> n ;
    vector<int> v(n);
    worst = second = 0x7fff; 
    int tmp;
    for (int i = 0 ; i < n; i++) cin >> v[i];
    for (int i = 0 ; i < n ; i++){
        if (v[i] < worst){
            second = worst;
            worst = v[i];
        }
        else if (v[i] < second){
            second = v[i];
        }
    }
    cout << second;

}