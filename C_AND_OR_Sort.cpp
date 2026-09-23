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
        string s;
        cin >> s;
        if(s[0] == '1'){
            int ans = 0;
            for(auto c : s){
                if(c == '0')ans++;
            }
            cout << ans << endl;
            continue;
        }
        int zero = 0;
        for(auto c : s){
            if(c == '0')zero++;
        }
        int one = 0;
        zero--;
        int ans = one + zero;
        for(int i = 1; i < n; i++){
            if(s[i] == '0')zero--;
            else one++;
            ans = min(ans,one+zero);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
