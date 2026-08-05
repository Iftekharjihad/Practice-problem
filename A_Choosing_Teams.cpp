#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int a,n,m;
	cin >> a;
	cin >> n;
	int b=0;
	for(int i=0;i<a;i++){
		cin >> m;
		if(m+n<6){
			b++;
		}
	}
	cout << b/3;
      
    return 0;
}
