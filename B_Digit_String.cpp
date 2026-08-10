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
        int rem = 0,ans = 0;
        for(auto c : s){
            if(c == '2')rem++;
            else if(c == '1' || c == '3')ans = max(ans+1,rem+1);
        }
        cout << s.length() - max(ans,rem) << endl;
    }
    
      
    return 0;
}
