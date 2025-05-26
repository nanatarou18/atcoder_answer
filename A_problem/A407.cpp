#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int A,B;
    cin>>A>>B;
    int c=A/B,d=A/B+1;
    int ans=0;
    if(abs(c*B-A)<abs(d*B-A)) ans=c;
    else ans=d;
    cout<<ans<<endl;
}