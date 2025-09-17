#include <bits/stdc++.h>
using namespace std;

int ball[101];

int main(){
    
    priority_queue<int,vector<int>, greater<int>> pq; 
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int a,b;
        cin >> a;
        if (a == 1){
            cin >> b;
            pq.push(b);
        }
        else {
            int x = pq.top();
            cout << x << '\n';
            pq.pop();
        }
        
        
    }

}