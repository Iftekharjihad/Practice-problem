#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    vector<ll> a;
    a.push_back(0);
    a.push_back(1);
    while(a.back() < 200000){
        a.push_back(2*a.back() + 2);
    }
    while(t--){
        ll n;
        cin >> n;
        int k = 1;
        while(a[k] < n){
            k++;
        }
        cout << k << endl;
    }
    
      
    return 0;
}
