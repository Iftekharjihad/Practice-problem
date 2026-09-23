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
        int x,y,z;
        cin >> x >> y >> z;
        int mn = min({x,y,z});
        cout << n - mn << endl;
    }
    
      
    return 0;
}
