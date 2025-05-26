#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int N,D;
    cin>>N>>D;
    vector<int> thickness(N),length(N);
    for(int i=0;i<N;i++)  cin>>thickness[i]>>length[i];

    for(int i=1;i<=D;i++){
        int max_weight=0;
        for(int j=0;j<N;j++){
            max_weight=max(max_weight,thickness[j]*(length[j]+i));
        }
        cout<<max_weight<<endl;
    }
}