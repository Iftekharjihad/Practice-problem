#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll x,y,z;
        cin >> x >> y >> z;
        ll d = y-x;
        ll m = x + z - 1;
        ll n = min(m,d);
        ll cnt = 0;
        if(n >= x){
            for(ll i = x; i <= n; i++){
                cnt += d % i;
            }
            ll ans = m - n;
            cnt += d * ans;
        }
        else{
            cnt += d * z;
        }
        cout << cnt << endl;
    }
    
      
    return 0;
}
