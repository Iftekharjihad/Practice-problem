#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, s = 0, p = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x + s < 0)
            p++;
        else
            s += x;
    }
    cout << p;

    return 0;
}
