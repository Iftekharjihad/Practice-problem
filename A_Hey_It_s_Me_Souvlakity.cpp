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
        string s;
        cin >> s;
        int l,r;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                l = i+1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '1'){
                r = i+1;
                break;
            }
        }
        int sz = r-l;
        cout << sz << endl;
    }
    
      
    return 0;
}
