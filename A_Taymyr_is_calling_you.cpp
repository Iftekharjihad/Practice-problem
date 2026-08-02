#include<bits/stdc++.h>
using namespace std;
#define ll long long

int __lcm(int a,int b){
    return (a/__gcd(a,b))*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m,z;
    cin >> n >> m >> z;
    cout << z/(__lcm(n,m));
      
    return 0;
}
