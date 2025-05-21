#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> A(N);
    for(int &a:A) cin>>a;

    vector<int> count(M+1,0);
    for(int i=0;i<N;i++) count[A[i]]+=1;

    for(int i=1;i<=M;i++){
        if(count[i]==0){
            cout<<0<<endl;
            return 0;
        }
    }

    for(int i=N-1;i>=0;i--){
        count[A[i]]-=1;
        if(count[A[i]]==0){
            cout<<N-i<<endl;
            return 0;
        }
    }
}