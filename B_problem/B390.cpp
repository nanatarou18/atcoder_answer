#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N;
    cin>>N;
    vector<long double> A(N);
    for(long double &a : A) cin>>a;
    bool ans=true;
    long double kouhi=A[1]/A[0];
    for(int i=0;i<N-1;i++){
        if(kouhi!=A[i+1]/A[i]) ans=false;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}