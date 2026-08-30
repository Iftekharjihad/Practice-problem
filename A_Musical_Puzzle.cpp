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
        int ans = 0;
        map<string,int> mp;
        for(int i = 0; i < n-1; i++){
            string word = "";
            word += s[i];
            word += s[i+1];
            if(mp[word] == 0){
                ans++;
                mp[word]++;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
