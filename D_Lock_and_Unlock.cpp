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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int mid = n/2;
        ll x = a[mid];
        ll y = 0;
        for(int i = 0; i < n; i++){
            y += llabs(a[i] - x);
        }
        cout << y << " " << a[n-1]-a[0] << endl;
    }
    
      
    return 0;
}
