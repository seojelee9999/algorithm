#include <bits/stdc++.h>

using namespace std;

void solve(int l, int r, int rem, vector<int> &ans){
    if (l == r){
        ans[l] += rem;
        return ;
    }
    int mid = (l + r) / 2;
    solve(l, mid, rem/2, ans);
    solve(mid + 1, r, (rem+1)/2 , ans);
}

int main()
{
    int N, K;
    cin >> N >> K;

    int n = 1 << N;   ///2
    int rem = K % n; // 11이면 1 rem을 배열에 더해주어야함
    K /= n;

    vector<int> ans(n, K);
    solve(0, n-1, rem, ans);
    cout << *max_element(ans.begin(), ans.end()) - *min_element(ans.begin(), ans.end()) << "\n";
    for (auto s : ans) cout << s << " ";
    
}