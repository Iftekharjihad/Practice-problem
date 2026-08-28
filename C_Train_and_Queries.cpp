#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        map<ll,int> mpl,mpr;
        for(int i = 1; i <= n; i++){
            if(mpl[a[i]] == 0)mpl[a[i]] = i;
        }
        for(int i = 1; i <= n; i++){
            mpr[a[i]] = i;
        }
        while(k--){
            int l,r;
            cin >> l >> r;
            if(mpl[l] == 0 || mpl[r] == 0){
                cout << "NO" << endl;
                continue;
            }
            if(mpl[l] <= mpr[r])cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
