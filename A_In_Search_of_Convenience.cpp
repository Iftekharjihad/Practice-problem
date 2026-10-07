#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int x,y,r;
        cin >> x >> y >> r;
        for(int i = 0; i <= r; i++){
            int rem = r*r - i*i;
            int j = sqrt(rem);
            if(j*j == rem){
                cout << x+i << " " << y+j << endl;
                break;
            }
        }
    }
    
      
    return 0;
}
