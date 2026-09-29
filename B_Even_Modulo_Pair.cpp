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
        vector<ll> a(n);
        vector<ll> even,odd;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0)even.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        if(even.size() >= 2){
            cout << even[0] << " " << even[1] << endl;
            continue;
        }
        bool ok = false;
        for(int i = 0; i < odd.size()-1; i++){
            if(odd[i+1] < 2*odd[i]){
                cout << odd[i] << " " << odd[i+1] << endl;
                ok = true;
                break;
            }
        }
        if(ok)continue;
        for(int i = 0; i < n && !ok; i++){
            for(int j = i+1; j < n; j++){
                if(a[j] % a[i] % 2 == 0){
                    cout << a[i] << " " << a[j] << endl;
                    ok = true;
                    break;
                }
            }
        }
        if(!ok) cout << -1 << endl;
    }
    
      
    return 0;
}
