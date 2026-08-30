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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> ans;
        
        int pos = max_element(a.begin(),a.end()) - a.begin();
        if(pos == 0){
            for(int i = 1; i < n; i++){
                ans.push_back(a[i]);
            }
            ans.push_back(a[0]);
        }
        else{
            int r = pos - 1;
            for(int i = r+1; i < n; i++){
                ans.push_back(a[i]);
            }
            ans.push_back(a[r]);
            int i = r-1;
            while(i >= 0 && a[i] > a[0]){
                ans.push_back(a[i]);
                i--;
            }
            for(int j = 0; j <= i; j++){
                ans.push_back(a[j]);
            }
        }

        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
