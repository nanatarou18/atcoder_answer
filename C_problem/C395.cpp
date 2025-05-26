#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N;
    cin>>N;
    vector<int> A(N),record(pow(10,7));
    for(int &a : A) cin>>a;

    int ans=pow(10,8);
    for(int i=0;i<N;i++){
        if(record[A[i]]!=0){
            ans=min(ans,i+2-record[A[i]]);
        }
        record[A[i]]=i+1;
    }
    if(ans!=pow(10,8)) cout<<ans<<endl;
    else cout<<-1<<endl;
}