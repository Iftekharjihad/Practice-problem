#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t,count;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        count += x[0] == 'T'? 4: x[0] == 'C'? 6 :x[0] == 'O'? 8 :x[0] == 'D'? 12 : 20;
    }
    cout << count;
      
    return 0;
}
