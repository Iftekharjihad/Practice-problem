#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> mp;
        int ans = 1;
        for(auto c : s){
            mp[c]++;
            if(mp.size() > 3){
                ans++;
                mp.clear();
                mp[c]++;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
