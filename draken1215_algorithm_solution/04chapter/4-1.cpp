#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll tribo(int x){
    if (x <= 2) return x /2;
    return tribo(x-1) + tribo(x-2) + tribo(x-3);
}

int main()
{
    vector<int> a(100);
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3 ; i < 100; i++) a[i] = a[i-1] + a[i-2] + a[i-3];
    cout << a[10];

    for (int i = 0 ; i<= 10; i++) cout << tribo(i) << "\n";
}