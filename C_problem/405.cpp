#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    ll N;
    cin>>N;
    vector<ll> A(N),backRuiseki(N+1);
    for(ll &a:A) cin>>a;

    for(int i=N-1;i>=0;i--){
        backRuiseki[i]=backRuiseki[i+1]+A[i];
    }

    ll ans=0;
    for(int i=0;i<N;i++){
        ans+=A[i]*(backRuiseki[i]-A[i]);
    }

    cout<<ans<<endl;
}