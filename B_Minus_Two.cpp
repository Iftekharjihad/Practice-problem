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
        ll odd = 0;
        ll cnt[2] = {0,0};
        for(int i = 0; i < n; i++){
            ll a;
            cin >> a;
            if(a % 2 == 1){
                odd++;
            }
            else{
                ll x = a/2;
                cnt[x % 2]++;
            }
        }
        ll ans = max({odd,cnt[0],cnt[1]});
        cout << ans << endl;
    }
    
      
    return 0;
}
