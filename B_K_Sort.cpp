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
        ll mx = 0,sum = 0,mxNeed = 0;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            mx = max(mx,x);
            ll need = mx - x;
            sum += need;
            mxNeed = max(mxNeed,need);
        }
        cout << sum + mxNeed << endl;
    }
    
      
    return 0;
}
