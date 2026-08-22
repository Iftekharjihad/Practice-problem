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
        vector<ll> b(n-1);
        for(int i = 0; i < n-1; i++){
            cin >> b[i];
        }
        vector<bool> used(n+1,false);
        ll extra = -1;
        bool ok = true;
        ll x = b[0];
        auto process = [&](ll x){
            if(x >= 1 && x <= n && !used[x]){
                used[x] = true;
            }
            else{
                if(extra != -1)ok = false;
                else extra = x;
            }
        };
        process(b[0]);
        for(int i = 1; i < n-1; i++){
            ll diff = b[i] - b[i-1];
            process(diff);
        }
        if(!ok){
            cout << "NO" << endl;
            continue;
        }
        vector<ll> missing;
        for(int i = 1; i <= n; i++){
            if(!used[i]){
                missing.push_back(i);
            }
        }
        if(extra == -1){
            if(missing.size() == 1)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(missing.size() == 2 && missing[0]+missing[1] == extra)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
