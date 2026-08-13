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
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        if(a == b){
            cout << "Bob" << endl;
            continue;
        }
        vector<int> v = b;
        reverse(v.begin(),v.end());
        
        if(a == v){
            cout << "Bob" << endl;
            continue;
        }
        cout << "Alice" << endl;
    }
    
      
    return 0;
}
