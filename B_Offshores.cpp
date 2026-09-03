#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 9;
int a[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int mx = 0;
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            mx = max(mx,a[i]-a[i]/x*y);
            sum += 1ll * a[i]/x*y;
        }
        cout << mx + sum << endl;
    }
    
      
    return 0;
}
