#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[1] == '+')ans++;
        if(s[1] == '-')ans--;
    }
    cout << ans;
      
    return 0;
}
