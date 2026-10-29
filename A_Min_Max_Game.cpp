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
        int cnt0 = 0,cnt1 = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x == 1)cnt1++;
            else cnt0++;
        }
        if(cnt1 >= cnt0)cout << "Bessie" << endl;
        else cout << "Elsie" << endl;
    }
    
      
    return 0;
}
