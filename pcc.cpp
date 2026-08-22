#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
char grid[1005][1005];
bool vis[1005][1005];

bool valid(int i,int j){
    if(i < 0 || i >= n || j < 0 || j >= m)return false;
    return true;
}

vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int si,int sj){
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && grid[ci][cj] == '.' && !vis[ci][cj]){
            dfs(ci,cj);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vis[i][j] = false;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans << endl;
      
    return 0;
}
