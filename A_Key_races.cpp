#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m,k,l,p;
    cin>>n>>m>>k>>l>>p;
    int s1=l*2,s2=p*2;
    s1+=(n*m);
    s2+=(n*k);
    if(s1<s2) cout<<"First";
    else if(s1>s2)cout<<"Second";
    else cout<<"Friendship";
      
    return 0;
}
