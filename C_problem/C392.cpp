#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N;
    cin>>N;
    vector<int> P(N),Q(N),record(N);
    for(int &p : P) cin>>p;
    for(int &q : Q) cin>>q;

    for(int i=0;i<N;i++) record[Q[i]-1]=P[i];

    for(int i=0;i<N;i++){
        cout<<Q[record[i]-1];
        if(i!=N-1) cout<<" ";
        else cout<<endl;
    }
}