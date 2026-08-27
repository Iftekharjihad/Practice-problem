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
        map<string,int> mp;
        vector<string> a(n),b(n),c(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            mp[b[i]]++;
        }
        for(int i = 0; i < n; i++){
            cin >> c[i];
            mp[c[i]]++;
        }
        int cnt1 = 0,cnt2 = 0,cnt3 = 0;
        for(int i = 0; i < n; i++){
            if(mp[a[i]] == 1)cnt1 += 3;
            else if(mp[a[i]] == 2)cnt1 += 1;

            if(mp[b[i]] == 1)cnt2 += 3;
            else if(mp[b[i]] == 2)cnt2 += 1;

            if(mp[c[i]] == 1)cnt3 += 3;
            else if(mp[c[i]] == 2)cnt3 += 1;
        }
        cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    }
    
      
    return 0;
}
