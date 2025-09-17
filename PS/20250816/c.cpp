#include <bits/stdc++.h>

using namespace std;
long long INF = 1LL << 50;
int main(){
    int n;
    cin >> n;
    long long lx=0, sx=INF, sy = INF, ly = 0;
    for (int i = 0 ; i < n ; i++){
        long long  a,b;
        cin >> a >> b;
        if (a < sx) sx = a;
        if (a > lx) lx = a;
        if (b < sy) sy = b;
        if (b > ly) ly = b; 
        
    }

    int gap = lx-sx+1 > ly-sy+1 ? (lx-sx+1)/2 : (ly-sy+1)/2;
    cout << gap;

}