#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[214514],b[214514];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            a[i] -= b[i];
        }
        sort(a+1,a+n+1);
        if(a[1]+a[2] >= 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
