#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll sum = a + c;
        ll take = sum - b;
        ll not_take = abs(b-a);
        cout << max(take,not_take) << endl;
    }
    
      
    return 0;
}
