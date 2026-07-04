#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,cnt1 = 0,cnt2 = 0;
		cin >> n;
		for(int i = 1;i <= n;i++){
            int x;
			cin >> x;
			if(x < 0)cnt1++; 
			if(x == 0)cnt2++; 
		}
        if(cnt1%2 == 1 or cnt2 > 0)cout<<0<<endl;
		else cout << 1 << endl <<"1 0" << endl;
    }
    
      
    return 0;
}
