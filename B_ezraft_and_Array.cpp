#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        if(n == 2){
            cout << -1 << endl;
            continue;
        }
        vector<ll> a = {1,2,3};
        ll sum = 6;
        for(int i = 4; i <= n; i++){
            a.push_back(sum);
            sum *= 2;
        }
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
