#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  int count=0;
  int goukei=0;
  while(goukei<N){
    count++;
    goukei+=count;
  }
  cout<<count<<endl;
}