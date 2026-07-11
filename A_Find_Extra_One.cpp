#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n, x, y, k = 0, l = 0; cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> x >> y;
		if (x > 0) k++;
		else l++;
	}
	if (n - k <= 1 || n - l <= 1) cout << "Yes";
	else cout << "No";
      
    return 0;
}
