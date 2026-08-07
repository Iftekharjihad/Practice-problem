#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int pref = 0,mx = 0,ans = 0;
        for(int i = 0; i < min(n,k); i++){
            pref += a[i];
            mx = max(mx,b[i]);
            int rem = k - (i+1);
            ans = max(ans,pref+rem*mx);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
