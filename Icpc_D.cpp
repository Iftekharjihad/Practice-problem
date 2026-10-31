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
        bool ok = true;
        if(n <= 3){
            if(n == 3){
                if(s[1] == s[0] || s[1] == s[2]){
                    cout << "YES" << endl;
                    continue;
                }
                else{
                    cout << "NO" << endl;
                    continue;
                }
            }
            else{
                cout << "YES" << endl;
                continue;
            }
        }
        for(int i = 1; i < n-2; i++){
            if(s[i] != s[i+1]){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
