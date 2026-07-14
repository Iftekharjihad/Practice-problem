#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx = 0;
        int cnt = 0;

        for(char c : s){
            if(c == '#'){
                cnt++;
                mx = max(mx, cnt);
            }else{
                cnt = 0;
            }
        }
        if(mx % 2 == 0)cout << mx/2 << endl;
        else cout << mx/2 + 1 << endl;
    }

    return 0;
}
