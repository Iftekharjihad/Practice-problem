#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<ll,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        sort(b.begin(),b.end());
        vector<ll> ans(n);
        for(int i = 0; i < n; i++){
            ans[v[i].second] = b[i];
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
