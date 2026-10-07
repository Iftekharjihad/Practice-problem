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
        int m = n-4;
        vector<ll> v(m);
        for(int i = 0; i < m; i++){
            v[i] = a[i] + a[i+2] - a[i+4];
        }
        vector<ll> v1 = v;
        sort(v1.begin(),v1.end());
        ll sum = 0;
        for(int i = 0; i < m;){
            int j = i;
            while(j < m && v1[j] == v1[i]){
                j++;
            }
            ll x = j - i;
            sum += x * (x-1)/2;
            i = j;
        }
        ll y = 0;
        for(int i = 0; i < m; i++){
            if(i+2 < m && v[i] == v[i+2]){
                y++;
            }
            if(i+4 < m && v[i] == v[i+4]){
                y++;
            }
        }
        cout << sum - y << endl;
    }
    
      
    return 0;
}
