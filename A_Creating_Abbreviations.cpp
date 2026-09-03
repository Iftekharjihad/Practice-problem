#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        map<char,int> mp;
        while(n--){
            string s;
            cin >> s;
            char c = _toupper(s[0]);
            mp[c]++;
        }
        bool ok = true;
        while(m--){
            string t;
            cin >> t;
            for(auto c : t){
                if(mp[c] == 0){
                    ok = false;
                    break;
                }
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
