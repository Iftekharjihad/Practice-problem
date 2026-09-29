#include<bits/stdc++.h>
using namespace std;
#define ll long long

int res(ll x){
    int s = 0;
    while(x > 0){
        int d = x % 10;
        s += d*d;
        x /= 10;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<vector<int>,ll> mp;
        for(int i = 0; i < n; i++){
            ll x = a[i];
            int y = 60;
            for(int j = 0; j < y; j++){
                x = res(x);
            }
            vector<int> v(8);
            for(int k = 0; k < 8; k++){
                v[k] = (int)x;
                x = res(x);
            }
            mp[v]++;
        }
        ll ans = 0;
        for(auto [x,y] : mp){
            ll m = y;
            ans += m * (m-1)/2;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
