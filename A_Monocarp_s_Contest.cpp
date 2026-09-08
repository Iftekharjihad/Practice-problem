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
        vector<int> a(n);
        int zero = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0)zero++;
        }
        if(zero < 2){
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        if(a[0] == 1)ans++;
        if(a[n-1] == 1)ans++;
        cout << ans << endl;
    }
    
      
    return 0;
}
