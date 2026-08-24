#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,l;
        cin >> n;
        l = ceil(sqrtl(n));
        cout << (l-1) << endl;
    }
    
      
    return 0;
}
