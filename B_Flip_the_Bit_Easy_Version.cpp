#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int p;
        cin >> p;
        int x = a[p];
        int left = 0;
        int prev = 0;
        for(int i = 1; i < p; i++){
            int cur = (a[i] != x);
            if(cur != prev){
                left++;
            }
            prev = cur;
        }
        int right = 0;
        prev = 0;
        for(int i = n; i > p; i--){
            int cur = (a[i] != x);
            if(cur != prev){
                right++;
            }
            prev = cur;
        }
        if(prev == 1){
            right++;
        }
        int ans = max(left,right);
        if(ans % 2)ans++;
        cout << ans << endl;
    }
    
      
    return 0;
}
