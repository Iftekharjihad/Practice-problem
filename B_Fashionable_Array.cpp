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
        vector<int> a(n);
        vector<int> cnt(101,0),v(101,0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int mx = 0,m = 0;
        vector<int> res;
        res.reserve(n);
        for(int i = 0; i < n; i++){
            int x = -1,y = -1, bestMx = -1;
            for(int j = 100; j >= 1; j--){
                if(cnt[j] > v[j]){
                    int n_cnt = v[j] + 1;
                    int nm,nmax;
                    if(n_cnt > mx){
                        nm = j;
                        nmax = n_cnt;
                    }
                    else if(n_cnt == mx){
                        nm = max(j,m);
                        nmax = mx;
                    }
                    else{
                        nm = m;
                        nmax = mx;
                    }
                    if(nm > y || (nm == y && nmax > bestMx)){
                        y = nm;
                        bestMx = nmax;
                        x = j;
                    }
                }
            }
            v[x]++;
            mx = bestMx;
            m = y;
            res.push_back(x);
        }
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
