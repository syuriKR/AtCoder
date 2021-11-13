#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;
    int id[n];
    vector<pair<int,int>>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i].first;
        vec[i].second = i;
    }
    sort(vec.begin(),vec.end());
    long long a = k/n;
    long long b = k%n;
    vector<long long>count(n,a);
    for(int i=0; i<b; i++){
        count[vec[i].second]++;
    }
    for(int i=0; i<n; i++){
        cout << count[i] << endl;
    }
}