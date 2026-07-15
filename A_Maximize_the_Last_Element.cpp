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
		int mx = -1, m;
		for(int i = 1; i <= n; ++i) {
			cin >> m;
			if(i%2 == 1) mx = max(mx,m);
		}
		cout << mx << endl;
    }
    
      
    return 0;
}
