#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 0;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    for(int i=0; i<n; i++){
        if(i%2==0){
            a+=vec[i];
        }
        else{
            b+=vec[i];
        }
    }
    cout << a-b << endl;
}