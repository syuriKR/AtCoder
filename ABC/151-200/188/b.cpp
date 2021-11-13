#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;

    vector<int>veca(n);
    vector<int>vecb(n);

    for(int i=0; i<n; i++){
        cin >> veca[i];
    }

    for(int i=0; i<n; i++){
        cin >> vecb[i];
    }

    for(int i=0; i<n; i++){
        ans += veca[i]*vecb[i];
    }

    if(ans == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}