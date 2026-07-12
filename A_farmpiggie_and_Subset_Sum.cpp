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
        vector<int> a(n+1);
        int x = 2,y = 1;
        for(int i = 1; i <= n; i+=2){
            a[i] = x;
            x += 2;
        }
        for(int i = 2; i <= n; i+=2){
            a[i] = y;
            y += 2;
        }
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
