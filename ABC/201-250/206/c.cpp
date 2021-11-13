#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int>vec(n);


    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    long long ans = (n*(n-1))/2;

    sort(vec.begin(),vec.end());
    vec.push_back(-1);
    long long count = 1;
    for(int i=0; i<n; i++){
        if(vec[i]!=vec[i+1]){
            ans -= ((count*(count-1))/2);
            count = 1;
        }
        else{
            count++;
        }
    }
    cout << ans << endl;
}