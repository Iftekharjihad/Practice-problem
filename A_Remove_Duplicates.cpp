#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    vector<int> a(n),ans;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(mp[a[i]] == 0)ans.push_back(a[i]);
        mp[a[i]]++;
    }
    cout << ans.size() << endl;
    reverse(ans.begin(),ans.end());
    for(auto val : ans){
        cout << val << " ";
    }
    cout << endl;
      
    return 0;
}
