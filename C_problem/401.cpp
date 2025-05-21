#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    ll N,K;
    cin>>N>>K;
    vector<ll> A(N+1);
    vector<ll> ruiseki(N+1);
    ll pow10_9=1;
    for(int i=0;i<9;i++) pow10_9*=10;

    for(int i=0;i<=N;i++){
        if(i<K) {
            A[i]=1;
            ruiseki[i]=i+1;
        }
        else if(i==K){
            A[i]=K;
            ruiseki[i]=A[i]+ruiseki[i-1];
        }
        else{
            A[i]=(pow10_9+ruiseki[i-1]-ruiseki[i-K-1])%pow10_9;
            ruiseki[i]=(A[i]+ruiseki[i-1])%pow10_9;
        }
    }
    cout<<A[N]<<endl;
}