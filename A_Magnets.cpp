#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c = 1, n, a, b;
    cin >> n >> a;
    for(int i = 1; i < n; i++){
        cin >> b;
        if(b != a){
            c++;
        }
        a = b;
    }
    cout << c;

    return 0;
}
