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
        char c;
        cin >> c;
        string s;
        cin >> s;
        int l = 0,r = s.size()-1;
        int ans = 0;
        while(l <= r){
            if(s[l] != s[r]){
                if(s[l] == c || s[r] == c)ans++;
                else ans += 2;
            }
            l++;
            r--;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
