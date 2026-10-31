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
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        bool ok = false;
        for(int i = 1; i < n-1; i++){
            if(a[i] >= 2)ok = true;
        }
        if(ok)cout << sum - 1 << endl;
        else if(a[0] >= 2 || a[n-1] >= 2)cout << sum - (n-1)<< endl;
        else cout << -1 << endl;
    }
    
      
    return 0;
}
