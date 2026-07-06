#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> v;
        int i = 0;
        while(i < n){
            int j = i;
            while(j < n && a[j] == a[i]){
                j++;
            }
            v.push_back(j-i);
            i = j;
        }
        sort(v.rbegin(),v.rend());
        int m = (int)v.size();
        ll s = 0,cnt = 0,ans = 0;
        for(int i = 0; i < m; i++){
            s += v[i];
            cnt++;
            if(i == m-1 || v[i+1] != v[i]){
                ll d = v[i];
                ll diff = k - s;
                if(diff % cnt == 0){
                    ll D = diff/cnt;
                    if(d + D >= 1)ans++;
                }
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
