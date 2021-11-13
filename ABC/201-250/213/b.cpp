#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i].first;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    cout << vec[1].second+1 << endl;
}