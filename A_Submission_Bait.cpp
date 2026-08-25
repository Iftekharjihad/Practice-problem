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
        vector<int> freq(n+1,0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        bool aliceWin = false;
        for(int i = 1; i <= n; i++){
            if(freq[i] % 2){
                aliceWin = true;
                break;
            }
        }
        cout << (aliceWin ? "YES" : "NO") << endl;
    }
    
      
    return 0;
}
