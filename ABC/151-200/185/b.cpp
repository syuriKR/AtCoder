#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    cin >> n >> m >> t;

    bool judge = true;

    vector<int>vecx(m+2);
    vector<int>vecy(m+2);

    for(int i=1; i<=m; i++){
        cin >> vecx[i];
        cin >> vecy[i];
    }

    vecx[0]=0;
    vecy[0]=0;
    vecx[m+1]=t;
    vecy[m+1]=t;

    int max = n;

    for(int i=0; i<=m; i++){
        n-=vecx[i+1]-vecy[i];
        if(n<=0){
            judge = false;
            break;
        }
        n+=vecy[i+1]-vecx[i+1];
        if(n>max){
            n = max;
        }
    }

    if(judge)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}