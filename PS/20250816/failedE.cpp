#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    string s;
    vector<vector<int>> v(x,vector<int>(y+1));
    for (int i = 0 ; i < x;i++){
        cin >> s;
        for(int j = 0; j <s.length(); j++){
            v[i][j+1] = s[j] - '0';
        }
    }

    vector<pair<int,int>> ans(y+1);
    
    for (int i = 1; i <= y ;i++){
        ans[i].second = i;
        ans[i].first = 0;
    }

    for (int i = 0; i < x; i++){
        int num0 = 0;
        int num1 = 1;
        for (int j = 1; j <= y; j++){
            if (v[i][j] == 0) num0++;
            else if (v[i][j] == 1) num1++;
        }
        if (num0 == 0 || num1 == 1){
            for(int j = 1; j <= y; j++) ans[j].first++;
        }
        else if (num0 > num1)
            for (int j = 1 ; j <=y ; j++){
                if (v[i][j] == 1) ans[j].first++;
            }
        else
            for (int j = 1 ; j <=y ; j++){
                if (v[i][j] == 0) ans[j].first++;
            }
    }
    sort(ans.begin(),ans.end());
    for (int i = 1; i <=y; i++)cout << ans[i].second;
    
}