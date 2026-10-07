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
        vector<int> st,ans;
        for(int i = 1; i <= n; i++){
            char c = s[i-1];
            if(c == '1'){
                st.push_back(i);
            }
            else if(c == '2'){
                if(!st.empty()){
                    st.pop_back();
                    ans.push_back(i);
                }
            }
        }
        for(auto x : st){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        cout << ans.size() << endl;
        for(auto val : ans){
            cout << val << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
