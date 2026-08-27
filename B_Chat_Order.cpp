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
        int n = s.size();
        string ans = "";
        bool ok = false;
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1] && !ok){
                if(s[i] == 'z')ans += "za";
                else{
                    ans += s[i];
                    ans += s[i] + 1;
                }
                ok = true;
            }
            else{
                ans += s[i];
            }
        }
        ans += s[n-1];
        char c = s.back();
        if(ok)cout << ans << endl;
        else{
            if(c == 'z')ans += 'a';
            else ans += c + 1;
            cout << ans << endl;
        }
    }
    
      
    return 0;
}
