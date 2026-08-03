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
        if(n % 2 == 0){
            cout << -1 << endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            cout << (i*2) % n+1 << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
