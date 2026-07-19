#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x;
    cin >> n;
    bool f[n+1]{};
    int c = 0,mx = 0;
    for(int i = 0; i < 2*n; ++i) {
        cin >> x;
        if(!f[x]){
            c++; mx=max(mx,c);
            f[x]=1;
        }
        else c--;
    }
    cout << mx << endl;
      
    return 0;
}
