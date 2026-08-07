#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,target;
    cin >> n >> target;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        int x = target - a[i];
        if(s.count(x)){
            cout << x << "," << a[i] << " ";
        }
        s.insert(a[i]);
    }
      
    return 0;
}
