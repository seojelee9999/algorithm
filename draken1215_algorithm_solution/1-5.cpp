#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

vector<vector<int>>const board{{0,1,2,3,4,5,6,7},{1,2,3,-1,5,-1,7,8},{2,-1,4,5,6,7,8,-1},{3,4,5,-1,-1,-1,9,-1},
    {-1,5,-1,-1,12,11,10,-1},{7,6,7,-1,13,-1,-1,16},{8,-1,8,-1,12,13,14,15},{9,-1,9,10,11,12,-1,16}};

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

vector<vector<int>> course(board.size(),vector<int>(board[0].size(),-1));

int main(){
    int stx = board.size() - 1;
    int sty = board[0].size() -1;
    
    vector<pair<int,int>> s;
    pair<int,int> pos = {stx,sty};
    s.push_back({stx,sty});
    while (board[pos.X][pos.Y]){
        for (int i = 0 ; i < 4 ; i++){
            int nx = dx[i] + pos.X;
            int ny = dy[i] + pos.Y;
            if (0 <= nx && nx <= stx && 0 <= ny && ny <= sty && board[nx][ny] == board[pos.X][pos.Y] - 1){
                pos = {nx,ny};
                s.push_back(pos);
                break;
            }
        }
    }
    reverse(s.begin(),s.end());
    //s 에는 x,y좌표들어있는거니까 정답코드에다가 s를 순차대로 돌면서 넣어주면될거같은데
    for (pair<int,int> p1 : s){
        course[p1.X][p1.Y] = board[p1.X][p1.Y];
    }
    for (int i = stx ; i >= 0; i--){
        for (int j = 0 ; j <= sty; j++){
            if (course[i][j] == -1) cout << "   ";
            else cout  <<setw(3) << course[i][j];
        }
        cout << '\n';
    }
    return 0;
}