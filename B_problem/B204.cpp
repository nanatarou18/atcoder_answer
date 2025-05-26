#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  vector<int> data(N);
  for(int &x : data){
    cin>>x;
  }
  int sum=0;
  for(int x : data){
    if(x>=10){
      sum+=x-10;
    }
  }
  cout<<sum<<endl;
}