#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b || b == c || a == c){
            cout << 0 << endl;
            continue;
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        int x = v[1]-v[0];
        int y = v[2]-v[1];
        cout << min(x,y) << endl;
    }
    
      
    return 0;
}
