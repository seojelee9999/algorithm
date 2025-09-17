#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a, b, c;
    int ans = 0;
    for (int i = 0 ; i < T; i++){
        ans = 0;
        cin >> a >> b >> c;
        // 문제가 a, c는 최소하나씩 먹는데 b는 상관없는 문제야
        // 상한은 딱봐도 a,c중 min값이 하한이될거고
        // 그리드로 접근하면 a,c를 하나씩 소모하다가 b를 무조건끼워서 소모하다가
        // a,c중 하나라도 0이면 그만
        // b를 다소모한경우 a,c의 최솟값과 a+c/3 min(a,c)의 값의 최솟값으로 하면될듯?
        // b를 다소모하지않은경우 일단소모를하고
        int min_ac = min(a,c);

        if (b < min_ac){
            ans += b;
            a -= b;
            c -= b;
            min_ac -= b;
            ans = min (ans + min_ac, ans + (a+c)/ 3);
        }
        else{
            ans = min_ac;
        }
        cout << ans << "\n";

    }
}