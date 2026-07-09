#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n,k;
    cin >> n >> k;
    if((n/k)%2)cout << "YES" << endl;
    else cout << "NO" << endl;
      
    return 0;
}
