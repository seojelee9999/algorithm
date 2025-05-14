#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n),c(n);

    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < n ; i++) cin >> b[i];
    for (int i = 0 ; i < n ; i++) cin >> c[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int ans = 0;
    for (int i = 0 ; i < n ; i++){
        int left = 0, right = n;
        int target = b[i];
        while (left < right){
            int mid = left + (right- left) / 2;
            if (target <= c[mid]) right = mid;
            else left = mid + 1;
        }
        while (left < n && c[left] == target) left++;
        int mul1 = n - left;
        left = 0, right = n;
        while (left < right){
            int mid = left + (right- left) / 2;
            if (target <= a[mid]) right = mid;
            else left = mid + 1;
        }
        while (left >= 0 && a[left] == target) left--;
        int mul2 = left +1;
        ans += mul1 * mul2;
    }
    cout << ans;

}