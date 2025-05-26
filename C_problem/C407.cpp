#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    string S;
    cin>>S;

    int Acount=S.size();
    int Bcount=0;
    S='f'+S;

    for(int i=S.size()-1;i>0;i--){
        while(S[i]==S[i-1]) i--;

        int num=S[i]-'0';
        int numto0=((num-Bcount)%10+10)%10;
        Bcount+=numto0;
    }

    int ans=Acount+Bcount;
    cout<<ans<<endl;
}