#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (s[0] == 'S' && s[n-1] == 'F' ? "YES" : "NO");
      
    return 0;
}
