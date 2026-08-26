#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    map<string,string> ans,has;
    for(int i = 0; i < n; i++){
        string s,t;
        cin >> s >> t;
        if(has.find(s) != has.end()){
            string x = has[s];
            ans[x] = t;
            has.erase(s);
            has[t] = x;
        }
        else{
            ans[s] = t;
            has[t] = s; 
        }
    }
    cout << ans.size() << endl;
    for(auto [x,y] : ans){
        cout << x << " " << y << endl;
    }
    cout << endl;
      
    return 0;
}
