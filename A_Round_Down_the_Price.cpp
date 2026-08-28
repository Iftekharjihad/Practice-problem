#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll m;
        cin >> m;
        string s = to_string(m);
        int n = s.size();
        string t = "1";
        int sz = n-1;
        for(int i = 1; i <= sz; i++){
            t += '0';
        }
        int num = stoi(t);
        cout << abs(m - num) << endl;
    }
    
      
    return 0;
}
