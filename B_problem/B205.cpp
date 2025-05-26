#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  vector<int> data(N);
  for(int &x : data){
    cin>>x;
  }
  sort(data.begin(),data.end());
  bool answer=true;
  for(int i=0;i<N;i++){
    if(data.at(i)!=i+1){
      answer=false;
    }
  }
  if(answer){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}