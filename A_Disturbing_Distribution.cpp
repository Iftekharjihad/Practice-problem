#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int cnt = 0,sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 1 || i == n-1){
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
    
      
    return 0;
}
