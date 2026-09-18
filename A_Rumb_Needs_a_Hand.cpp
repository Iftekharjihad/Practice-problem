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
        vector<int> a(n),v;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != i+1)v.push_back(a[i]);
        }
        cout << (is_sorted(v.begin(),v.end(), greater<int>()) ? "YES" : "NO") << endl;
    }
    
      
    return 0;
}
