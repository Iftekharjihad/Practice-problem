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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l = -1;
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                l = i;
                break;
            }
        }
        int r = -1;
        for(int i = n-1; i >= 0; i--){
            if(a[i] != 0){
                r = i;
                break;
            }
        }
        if(l == -1){
            for(int i = 0; i < n; i++){
                cout << 0 << " ";
            }
            cout << endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            if(a[i] == -1)a[i] = 0;
        }
        if(l == r)a[l] = 1;
        else{
            a[l] = 1;
            a[r] = 1;
            for(int i = l+1; i < r; i++){
                a[i] = 0;
            }
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
