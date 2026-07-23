#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,i,h[31],a[31],j,t = 0;
	cin >> n;
	for (i=1;i<=n;i++){
	  cin>>h[i]>>a[i];
    }
	for (i=1;i<=n;i++){
	  for (j=1;j<=n;j++){
	     if (a[i]==h[j]) t++;
      }
    }
	cout << t;
      
    return 0;
}
