#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll a,b,c,sum = 0;
	cin >> a >> b;
	for(int i = 1;i <= a;i++){
		cin >> c;
		sum += c;
	}
	sum = abs(sum);
	cout << ceil(1.0*sum/b);
      
    return 0;
}
