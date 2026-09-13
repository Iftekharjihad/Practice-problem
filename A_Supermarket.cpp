#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    double n,m,min = 50000;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        double k,l;
        cin >> k >> l;
        if(k/l * m < min){
            min = k/l * m;
        }
    }
    printf("%.8lf",min);
      
    return 0;
}
