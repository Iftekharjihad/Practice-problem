#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n;
    cin >> n;
    int last = n%10;
    if(last <= 5){
        n -= last;
    }
    else{
        n += (10-last);
    }
    cout << n << endl;
      
    return 0;
}
