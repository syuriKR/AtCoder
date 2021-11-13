#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec(3);
    for(int i=0; i<3; i++){
        cin >>vec[i];
    }
    sort(vec.begin(),vec.end());
    if(vec[2]-vec[1]==vec[1]-vec[0]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    } 
}
