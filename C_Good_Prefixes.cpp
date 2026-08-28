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
        int l = 0,r = n-1;
        while(l < r){
            if(a[l] != a[r]){
                l++;
                r--;
            }
            else break;
        }
        cout << r-l+1 << endl;
    }
    
      
    return 0;
}
