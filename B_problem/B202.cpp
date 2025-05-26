#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin>>S;
  for(int i=0;i<S.size();i++){
    if(S.at(i)=='6'){
      S.at(i)='9';
    }
    else if(S.at(i)=='9'){
      S.at(i)='6';
    }
  }
  reverse(S.begin(),S.end());
  cout<<S<<endl;
}