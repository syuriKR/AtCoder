#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,j;
    cin >> n >> j;
    vector<vector<int>>vec(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            cin >> vec[i][k];
        }
    }
    int finans = 100100100;
    for(int i=0; i<j; i++){
        for(int k=0; k<j; k++){
            vector<int>vecx;
            vecx.push_back(vec[i][k]);
            sort(vecx.begin(),vecx.end());
            int ans = vecx[(j*j)/2];
            if(finans>ans){
                finans=ans;
            }
        }
    }
    cout << finans << endl;
}