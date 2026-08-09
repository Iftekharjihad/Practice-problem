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
        
        vector<ll> val;
        vector<int> freq;
        for(int i = 0; i < n;){
            int j = i;
            while(j < n && a[i] == a[j])j++;
            val.push_back(a[i]);
            freq.push_back(j-i);
            i = j;
        }
        int m = val.size();
        vector<int> pre(m+1,0);
        for(int i = 0; i < m; i++){
            pre[i+1] = pre[i] + freq[i];
        }
        int l = 0,keep = 0;
        for(int r = 0; r < m; r++){
            while(l <= r && val[r]-val[l] >= r-l+1){
                l++;
            }
            int cnt = pre[r+1] - pre[l];
            keep = max(keep,cnt);
        }
        cout << n - keep << endl;
    }
    
      
    return 0;
}
