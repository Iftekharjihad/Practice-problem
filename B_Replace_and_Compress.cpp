#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        bool ok1 = false,ok2 = false;
        for(int i = 1; i < n-1; i++){
            bool a = s[i-1] != s[i];
            bool b = s[i] != s[i+1];
            if(!a && !b) ok1 = true;
            if(a && b)ok2 = true;
        }
        cout << 1+ (int)ok1 + (int)ok2 << endl;
    }
    
      
    return 0;
}
