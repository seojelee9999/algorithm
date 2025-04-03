#include <bits/stdc++.h>


using namespace std;


int binary_search_num(int lo, int high, int target){
    int cnt = 0;
    while (lo + 1 < high){
        int mid = (lo + high) / 2;
        if (mid <= target) lo = mid;
        else high = mid;
        cnt++;
        cout << mid << '\n';
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << binary_search_num(0,100,100);

}