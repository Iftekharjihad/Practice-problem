#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(m),b(n+1);
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            b[x]++;
        }
        for(const auto &i : a){
            cout << (k<n-1 ? 0 : (k==n ? 1 : !b[i]));
        }
        cout << endl;
    }
    
      
    return 0;
}
