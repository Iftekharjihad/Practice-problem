#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,ans;
    cin >> n;
    string s;
    cin >> s;
    while(s.find("xxx") != -1){
        s.erase(s.find("xxx"),1);
        ans++;
    }
    cout << ans << endl;
      
    return 0;
}
