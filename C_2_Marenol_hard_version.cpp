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
        vector<int> even1,odd1,even2,odd2;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s1[i] == '1'){
                    even1.push_back(cnt1);
                }
                cnt1++;
            }
            else{
                if(s1[i] == '1')odd1.push_back(cnt2);
                cnt2++;
            }
        }
        cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s2[i] == '1'){
                    even2.push_back(cnt1);
                }
                cnt1++;
            }
            else{
                if(s2[i] == '1')odd2.push_back(cnt2);
                cnt2++;
            }
        }
        if(even1.size() != even2.size() || odd1.size() != odd2.size()){
            cout << -1 << endl;
            continue;
        }
        ll ans = 0;
        for(int i = 0; i < even1.size(); i++){
            ans += abs((ll)even1[i] - (ll)even2[i]);
        }
        for(int i = 0; i < odd1.size(); i++){
            ans += abs((ll)odd1[i] - (ll)odd2[i]);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
