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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<int,char> mp;
        vector<ll> b = a;
        sort(b.begin(),b.end());
        for(int i = 0; i < n; i++){
            if(b[i] % 2 == 0)mp[i] = 'E';
            else mp[i] = 'O';
        }
        bool ok = true;
        for(int i = 0; i < n; i++){
            if((a[i]%2 == 0 && mp[i]!='E') || (a[i]%2 == 1 && mp[i]!= 'O')){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
