#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N,M;
    cin>>N>>M;
    vector<string> S(N);
    vector<string> T(M);
    for(int i=0;i<N;i++) cin>>S[i];

    for(int i=0;i<M;i++) cin>>T[i];

    for(int i=0;i<N-M+1;i++){
        for(int j=0;j<N-M+1;j++){
            if(S[i][j]==T[0][0]){
                bool ans=true;
                for(int k=0;k<M;k++){
                    for(int l=0;l<M;l++){
                        if(S[i+k][j+l]!=T[k][l]) ans=false; 
                    }
                }
                if(ans==true){
                    cout<<i+1<<" "<<j+1<<endl;
                    return 0;
                }
            }
        }
    }
}