#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n, a;
    cin >> n >> a;
    while(n*(n+1)/2*5>240-a)n--;
    cout << n;
      
    return 0;
}
