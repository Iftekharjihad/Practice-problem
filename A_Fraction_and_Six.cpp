#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string p,q;
        cin >> p >> q;
        int freq1[26] = {0};
        int freq2[26] = {0};
        for(char c : p){
            freq1[c - 'a']++;
        }
        for(char c : q){
            freq2[c - 'a']++;
        }
        bool ok = true;
        for(int i = 0; i < 26; i++){
            int rem = freq1[i] - freq2[i];
            int need = (i == 's' - 'a' || i == 'i'-'a'|| i == 'x'-'a') ? 1 : 0;
            if(rem != need){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
