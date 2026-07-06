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
        vector<int> v1(n),v2(n);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            int cnt1 = 0,cnt2 = 0;
            if(x == 1){
                cnt1 = 1;
                cnt2 = 1;
            }
            else if(x == 2){
                cnt1 = -1;
                cnt2 = 1;
            }
            else{
                cnt1 = -1;
                cnt2 = -1;
            }

            if(i == 0){
                v1[i] = cnt1;
                v2[i] = cnt2;
            }
            else{
                v1[i] = v1[i-1] + cnt1;
                v2[i] = v2[i-1] + cnt2;
            }
        }
        vector<int> v3(n);
        v3[n-2] = v2[n-2];
        for(int i = n-3; i >= 0; i--){
            v3[i] = max(v3[i+1],v2[i]);
        }
        bool ok = false;
        for(int i = 0; i <= n-3; i++){
            if(v1[i] >= 0 && v3[i+1] >= v2[i]){
                ok = true;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
