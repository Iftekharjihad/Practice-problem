#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll mn = 1e18,mx = -1;
        for(int i = 1; i <= n; i++){
            ll x;
            cin >> x;
            if(i % 2)mn = min(mn,x);
            else mx = max(mx,x);
        }
        if(n % 2 == 0 && mx + 2 <= mn)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
