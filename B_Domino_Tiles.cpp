#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;

ll way(string &s,int x,int n){
    bool zero = true,one = true;
    int idx = 0;
    for(int i = x;i < n; i += 2,idx++){
        char c = s[i];
        if(c == '?'){
            continue;
        }
        int val = c - '0';
        int exp0 = (idx % 2 == 0) ? 0 : 1;
        int exp1 = (idx % 2 == 0) ? 1 : 0;
        if(val != exp0){
            zero = false;
        }
        if(val != exp1){
            one = false;
        }
    }
    ll ans = 0;
    if(zero)ans++;
    if(one)ans++;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll odd = way(s,0,n);
        ll even = way(s,1,n);

        ll ans = (odd * even) % MOD;
        cout << ans << endl;
    }
    
      
    return 0;
}
