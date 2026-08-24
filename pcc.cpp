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
        int one = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1)one++;
        }
        int other = n - one;
        if(one % 2 == 0)cout << other + (one/2) << endl;
        else cout << other + (one/2)+1 << endl;
    }
    
      
    return 0;
}
