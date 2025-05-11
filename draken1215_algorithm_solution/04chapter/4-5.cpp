#include <bits/stdc++.h>

using namespace std;

int recur(int target, int i, bool use3, bool use5, bool use7){
    if (target < i) return 0;
    int cnt = use3&&use5&&use7;
    cnt += recur(target, i * 10 + 3, true, use5, use7);
    cnt += recur(target, i * 10 + 5, use3, true, use7);
    cnt += recur(target, i * 10 + 7, use3, use5, true);
    return cnt;
}

int main()
{
    int N;
    cin >> N;
    cout << recur(N,0,false,false,false);



}