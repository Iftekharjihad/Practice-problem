#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int n = r-l+1;
        ll s = (l+r) * n/2;
        for(int i = 1; i <= n; i++){
            ll mn = i*l + i*(i-1)/2;
            ll mx = i*r - i*(i-1)/2;
            if(mn <= s && s <= mx){
                cout << i - 1 << endl;
                break;
            }
        }
    }
    
      
    return 0;
}
