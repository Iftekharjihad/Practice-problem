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
        vector<ll> a(n);
        int odd = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2)odd++;
        }
        int mn = *min_element(a.begin(),a.end());
        if(mn % 2 || odd == 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
