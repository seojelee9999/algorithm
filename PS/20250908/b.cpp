#include <bits/stdc++.h>

using namespace std;
vector<string> v(21);
int H, W;
int dx[] = {1,-1, 0,0};
int dy[] = {0,0,1,-1};
bool check(int x, int y){
    if (0 >= x || x > H) return false;
    if (0 > y || y >= W) return false;
    return true;
}

int adj_black(int i, int j){
    int cnt = 0;
    for (int k = 0 ; k < 4; k++){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (!check(nx,ny)) continue;
        if (v[nx][ny] == '#') cnt++;
    }
    return cnt;
}

int main(){

    cin >> H >> W;

    
    for (int i =1 ; i <= H ; i++){
        cin >> v[i];
    } 
    int cnt = 0;
    for (int i = 1 ; i <= H; i++){
        for (int j = 0; j < W; j++){
            if (v[i][j] == '#'){
                cnt = adj_black(i,j);
                if (cnt != 2 && cnt != 4){
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
    return 0;


}