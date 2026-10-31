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
        string s;
        cin >> n >> s;
        vector<int> v;
        for(int i = 0; i < n;){
            int j = i;
            while(j < n && s[j] == s[i]){
                j++;
            }
            v.push_back(j-i);
            i = j;
        }
        bool ok = true;
        int sz = v.size();
        if(sz >= 4){
            ok = false;
        }
        else if(sz == 3){
            if(v[0] + v[2] <= v[1])ok = true;
            else ok = false;
        }

        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
