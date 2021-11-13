#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    int x[n][d];
    for(int i=0; i<n; i++){
        for(int k=0; k<d; k++){
            cin >> x[i][k];
        }
    }
    int ans = 0;
    for(int i=0; i<n-1; i++){
        for(int k=i+1; k<n; k++){
            int count = 0;
            for(int j=0; j<d; j++){
                count+=(x[i][j]-x[k][j])*(x[i][j]-x[k][j]);
            }
            bool f = false;
            for(int i=0; i<=count; i++){
                if(i*i == count){
                    f = true;
                }
            }
            if(f)ans++;
        }
    }
    cout << ans << endl;
}