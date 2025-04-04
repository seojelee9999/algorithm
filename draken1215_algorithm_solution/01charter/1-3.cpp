#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> A{-1,2};
vector<int> B{-1, -1};
vector<vector<int>> C{{-1,3,-1}, {-1,-1}};
vector<int> D{-1,4,-1};

ll vec_to_num(vector<int> &v){
    ll ret = 0;
    for (int i = v.size()-1 ; i >= 0; --i){
        ret = ret * 10 + v[i];
    }
    return ret;
}

vector<int> num_to_vec(ll n){
    vector<int> ret;
    while (n > 0){
        ret.push_back(n%10);
        n /= 10;
    }
    return ret;
}
bool is_valid(vector<int> &v, ll num){
    vector<int> vv = num_to_vec(num);
    if (vv.size() != v.size()) return false;
    
    for (int i = 0 ; i < vv.size(); i++){
        if (v[i] == -1) continue;
        if (v[i] != vv[i]) return false;
    }

    return true;
}

void sol(int depth){
    if (depth < A.size()) {
        if (A[depth] == -1) {
            for (int i = (depth == A.size() - 1 ? 1 : 0); i < 10; i++) {
                A[depth] = i;
                sol(depth + 1);
            }
            A[depth] = -1;
        } else {
            sol(depth + 1);
        }
        return;
    }
    ll numA = vec_to_num(A);
    int N = depth - A.size();
    if (B.size() > N){
        if (B[N] == -1){
            for (int i = (N == B.size() -1 ? 1 : 0); i < 10; i++){
                B[N] = i;
                if (is_valid(C[N], numA * B[N])){
                    sol(depth + 1);
                }
            }
            B[N] = -1;
        }
        else{
            if (is_valid(C[N], numA * B[N])) sol(depth + 1);
        }
        return ;
    }
    
    ll numB = vec_to_num(B);
    ll numC = numA * numB;
    if (is_valid(D,numC)){
        cout << numA << '\n' << numB << '\n';
        while (numB > 0){
            cout << numA * (numB % 10) << '\n';
            numB /= 10;
        }
        cout << numC;
    }
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sol(0);
    return 0;
}
