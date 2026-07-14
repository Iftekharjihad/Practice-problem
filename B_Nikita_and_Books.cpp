#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll need = 1;
        bool ok = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i] < need) {
                ok = false;
                break;
            }
            ll extra = a[i] - need;
            a[i + 1] += extra;
            need++;
        }
        if(ok && a[n - 1] >= need)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}