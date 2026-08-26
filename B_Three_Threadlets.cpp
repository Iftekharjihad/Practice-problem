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
        ll g = __gcd(a,__gcd(b,c));
        cout << ((a/g + b/g + c/g <= 6) ? "YES" : "NO") << endl;
    }
    
      
    return 0;
}
