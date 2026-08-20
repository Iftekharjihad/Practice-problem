#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<ll>> a(n,vector<ll>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ll mx = 0;
                for(int k = 0; k < 4; k++){
                    int ni = i + dr[k];
                    int nj = j + dc[k];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < m){
                        mx = max(mx,a[ni][nj]);
                    }
                }
                a[i][j] = min(a[i][j],mx);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
      
    return 0;
}
