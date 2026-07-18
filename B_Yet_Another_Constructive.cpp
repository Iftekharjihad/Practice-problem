#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,k,m;
        cin >> n >> k >> m;
        if(m < k)cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            ll x = m - k + 1;
            for(int i = 1; i <= n; i++){
                if(i % k == 0){
                    cout << x << " ";
                }
                else{
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }
    
      
    return 0;
}
