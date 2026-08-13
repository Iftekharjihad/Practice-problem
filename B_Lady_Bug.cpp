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
        string a,b;
        cin >> a >> b;
        int ac = 0,bc = 0;
        for(int i = 0; i < n; i++){
            ac += (a[i] - '0');
            bc += (b[i] - '0');
            swap(a,b);
        }
        cout << (ac <= n/2 && bc <= (n+1)/2 ? "YES" : "NO");
        cout << endl;
    }
    
      
    return 0;
}
