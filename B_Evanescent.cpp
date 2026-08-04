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
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1])cnt++;
        }
        int ans = INT_MAX;
        for(int i = 1; i <= n - 2; i++){
            int x = (s[i-1] != s[i]) + (s[i] != s[i+1]);
            int y = (s[i-1] != s[i+1]);
            int cur = cnt + (y - x);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
