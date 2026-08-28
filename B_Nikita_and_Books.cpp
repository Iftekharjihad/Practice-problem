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
        map<ll,int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx = 0;
        for(auto [x,y] : mp){
            mx = max(mx,y);
        }
        if(mx <= (n-mx)){
            if(n%2)cout << 1 << endl;
            else cout << 0 << endl;
        }
        else{
            cout << mx - (n-mx) << endl;
        }
    }
    
      
    return 0;
}
