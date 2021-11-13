#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<vector<char>>vec(h,vector<char>(w));
    for(int i=0; i<h; i++){
        for(int k=0; k<w; k++){
            cin >> vec.at(i).at(k);
        }
    }
    int ans = -3;
    x--;
    y--;
    // 上
    for(int i=x; i>=0; i--){
        if(vec[i][y]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    // 下
    for(int i=x; i<h; i++){
        if(vec[i][y]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    // 右
    for(int i=y; i<w; i++){
        if(vec[x][i]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    // 下
    for(int i=y; i>=0; i--){
        if(vec[x][i]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}