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
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1)cnt++;
        }
        if(n % 2 == 1){
            cout << "NO" << endl;
        }
        else if((cnt % 2) == ((n/2) % 2)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
