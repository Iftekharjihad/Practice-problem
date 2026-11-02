#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k,x,s = 0, a = 0;
        cin >> n >> k;
        vector<int> c(n+2);
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x <= n)c[x]++;
        }
        for(int i = 0; i <= n; i++){
            if(!c[i] || (s += c[i]-k) < 0){
                break;
            }
            a = i+1;
        }
        cout << a << endl;
    }
    
      
    return 0;
}
