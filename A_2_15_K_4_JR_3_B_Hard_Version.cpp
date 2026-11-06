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
        vector<ll> a(n);
        for(auto &x : a){
            int val;
            cin >> val;
            x = 1LL << val;
        }
        sort(a.rbegin(),a.rend());
        ll x = 0,y = 0;
        for(auto val : a){
            if(x <= y)x += val;
            else y += val;
        }
        cout << x * y << endl;
    }
    
      
    return 0;
}
