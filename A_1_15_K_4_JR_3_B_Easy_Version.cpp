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
            int x = n/2;
            cout << x*x << endl;
        }
        else{
            int x = n/2;
            int y = x+1;
            cout << x*y << endl;
        }
    }
    
      
    return 0;
}
