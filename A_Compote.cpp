#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(a,min(b/2,c/4))*7;
      
    return 0;
}
