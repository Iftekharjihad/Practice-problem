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
        set<char> st(s.begin(),s.end());
        if(st.size() == 1){
            cout << 0 << endl;
        }
        else{
            cout << 2*(n-1) << endl;
        }
    }
    
      
    return 0;
}
