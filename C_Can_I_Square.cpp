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
	    long long sum = 0;
	    while(n--){
            int x;
            cin >> x;
            sum += x;
        }
	    cout << ((sqrt(sum) == int(sqrt(sum))) ? "YES" : "NO")<<endl;
    }
    
      
    return 0;
}
