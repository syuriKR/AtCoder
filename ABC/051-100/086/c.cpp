#include<bits/stdc++.h>
using namespace std;

//初回からの距離でしか見られてない、前回からの距離を見るためにリスト化する必要あり。
int main(){
    int n;
    bool judge = true;
    cin >> n;
    int t[110000],x[110000],y[110000];
    t[0]=x[0]=y[0]=0;
    for(int i=1; i<=n; i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    for(int i=0; i<n; i++){
        int dt = t[i+1]-t[i];
        int dist = abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
        if(dt < dist){
            judge = false;
        }

        if(dist%2 != dt%2){
            judge = false;
        }
        //distとdtの偶奇は一致する必要あり！
    }

    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    } 
}