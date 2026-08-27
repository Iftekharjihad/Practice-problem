#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sum = 0;
        int ans = 0;
        map<ll,int> mp;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            sum += x;
            mp[x]++;
            if(sum % 2 == 0 && mp[sum/2] > 0)ans++;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
