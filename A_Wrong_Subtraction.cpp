#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int a,b;
    cin >> a >> b;
    while(b--){
        a % 10 == 0 ? a = a/10 : a -= 1;
    }
    cout << a << endl;
      
    return 0;
}
