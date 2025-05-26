#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    string T,U;
    cin>>T>>U;
    T+="11111111";
    int T_size=T.size();

    for(int i=0;i<T_size;i++){
        bool ans=true;
        for(int j=0;j<U.size();j++){
            if(T[i+j]=='?') continue;
            else if(T[i+j]!=U[j]) ans=false;
        }
        if(ans){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}