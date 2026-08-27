#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m;
    cin >> n >> m;
    map<string,string> mp;
    while(n--){
        string a,b;
        cin >> a >> b;
        b += ";";
        mp[b] = a;
    }
    while(m--){
        string s,t;
        cin >> s >> t;
        cout << s << " " << t << " " << '#' << mp[t] << endl;
    }
      
    return 0;
}
