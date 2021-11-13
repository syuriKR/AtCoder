#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>vec1(n);
    vector<int>vec2(n);
    for(int i=0; i<n; i++){
        cin >> vec1[i];
        cin >> vec2[i];
    }
    int maxvec2 = 0;
    for(int i=0; i<n; i++){
        if(vec2[i]>maxvec2){
            maxvec2 = vec2[i];
        }
    }
    int minjudge = 100100;
    int ans;
    for(int i=0; i<n; i++){
        if(maxvec2-vec2[i]>0 && maxvec2-vec2[i]<minjudge){
            minjudge = maxvec2-vec2[i];
            ans = i;
        }
    }
    cout << vec1[ans] << endl;
}