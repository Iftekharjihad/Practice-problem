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
        vector<int> cnt(m+2,0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            cnt[x]++;
        }
        vector<ll> v(m+2,0);
        for(int i = m; i >= 1; i--){
            v[i] = v[i+1] + cnt[i];
        }
        vector<int> s(m+2,0);
        for(int i = m; i >= 1; i--){
            s[i] = max(cnt[i],s[i+1]);
        }
        ll ans = 0;
        for(int i = 1; i <= m; i++){
            ll x = v[i] + ((2LL*i <= m) ? (long long)cnt[2*i] : 0LL);
            ll y = cnt[i] + s[i+1];
            ans = max(ans, max(x, y));
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
