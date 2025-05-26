#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()

int main(){
    int H,W,N;
    cin>>H>>W>>N;
    vector<queue<int>> X(H+1),Y(W+1);
    vector<int> Xerase(H+1),Yerase(W+1);

    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        X[x].push(y);
        Y[y].push(x);
    }

    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int query,eraser;
        cin>>query>>eraser;

        if(query==1){
            int size=X[eraser].size();
            if(size-Xerase[eraser]<0) cout<<0<<endl;
            else cout<<size-Xerase[eraser]<<endl;


            while(X[eraser].size()>0){
                Yerase[X[eraser].front()]+=1;
                X[eraser].pop();
            }
        }

        if(query==2){
            int size=Y[eraser].size();
            if(size-Yerase[eraser]<0) cout<<0<<endl;
            else cout<<size-Yerase[eraser]<<endl;

            while(Y[eraser].size()>0){
                Xerase[Y[eraser].front()]+=1;
                Y[eraser].pop();
            }
        }
    }
}