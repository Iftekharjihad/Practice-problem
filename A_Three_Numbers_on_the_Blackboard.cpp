#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        vector<ll> v = {a,b,c};
        sort(v.begin(),v.end());
        ll x = (v[0]+v[1]);
        ll mn = min(x,v[2]);
        cout << mn - v[0] << endl;
    }
    
      
    return 0;
}
