#include <bits/stdc++.h>

using namespace std;
long long INF = 1e9;
int n , m; 
vector<int> a;
vector<int> b;
bool solve(int x){
    int cnt = 0;
    for (int i = 0 ; i < n ; i++){
        cnt += upper_bound(b.begin(), b.end(), x/a[i]) - b.begin();
    }
    return cnt>= m;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m; 
    a.resize(n);
    b.resize(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < n ; i++) cin >> b[i];
    int left = 0, right = INF;
    sort(b.begin(), b.end());
    //최댓값구해야함
    while (left + 1 < right){
        int mid = left + (right-left) / 2;
        if (solve(mid)){
            left = mid;
        }
        else right = mid;
    }

    cout << left;
}