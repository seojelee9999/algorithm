#include <bits/stdc++.h>

using namespace std;
char a[1001][1001];
int h,w;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
char op[] = {'<','^','>','v'};
bool check(int x, int y){
  if (x < 0  || x >= h || y < 0 || y >= w) return false;
  return a[x][y] == '.';
}
int main(){
  
  queue<pair<int,int>> q;
  
  cin >> h >> w;
  for (int i = 0  ; i < h; i++){
    for (int j = 0 ;j < w; j++){
      cin >> a[i][j];
      if (a[i][j] == 'E') q.push({i,j});
    }
  }
  while(!q.empty()){
    pair<int,int> p = q.front();
    q.pop();
    for (int i = 0 ; i < 4; i ++){
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];
      if (check(nx,ny)){
        a[nx][ny] = op[i];
        q.push({nx,ny});
      }
    }
  }
  
  for (int i = 0 ; i <h; i++){
    for (int j = 0 ; j < w; j++){
      cout << a[i][j];
    }
    cout << '\n';
  }
  
  
}