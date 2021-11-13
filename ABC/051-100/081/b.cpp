#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long ans;
    long long ansmin = 10000000001;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    for(int i=0; i<n; i++){
        ans = 0;
        bool f = true;
        while(f){
            if(vec[i]%2==0){
                vec[i]/=2;
                ans++;

            }
            else{
                f = !f;
            }
        }
        ansmin = min(ans,ansmin);
    }
    cout << ansmin << endl;
}