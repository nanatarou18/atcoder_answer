#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin>>N>>K;
  int sum=0;
  for(int i=0;i<N;i++){
    for(int j=0;j<K;j++){
      sum+=100*(i+1)+(j+1);
    }
  }
  cout<<sum<<endl;
}