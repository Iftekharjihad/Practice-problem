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
        string s1,s2;
        cin >> s1 >> s2;
        ll even1 = 0,odd1 = 0,even2 = 0,odd2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s1[i] == '1')even1++;
                if(s2[i] == '1')even2++;
            }
            else{
                if(s1[i] == '1')odd1++;
                if(s2[i] == '1')odd2++;
            }
        }
        if(even1 == even2 && odd1 == odd2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
