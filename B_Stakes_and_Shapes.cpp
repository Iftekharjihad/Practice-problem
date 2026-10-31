#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int len = x+y+z;
        char c;
        if(z >= x)c = 'S';
        else if(y >= z)c = 'R';
        else c = 'P';
        cout << string(len,c) << endl;
    }
    
      
    return 0;
}
