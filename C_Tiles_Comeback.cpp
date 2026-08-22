#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int leftIndex = -1,rightIndex = -1;
        int cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == a[0])cnt1++;
            if(cnt1 == k){
                leftIndex = i;
                break;
            }
        }
        if(leftIndex == -1){
            cout << "NO" << endl;
            continue;
        }
        int cnt2 = 0;
        for(int i = n-1; i >= 0; i--){
            if(a[i] == a[n-1])cnt2++;
            if(cnt2 == k){
                rightIndex = i;
                break;
            }
        }
        if(rightIndex == -1){
            cout << "NO" << endl;
            continue;
        }
        if(a[0] == a[n-1]){
            cout << "YES" << endl;
            continue;
        }
        if(leftIndex < rightIndex)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
