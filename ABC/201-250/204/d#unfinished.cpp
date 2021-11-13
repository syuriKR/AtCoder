#include<bits/stdc++.h>
using namespace std;

int main(){
    // bit全探索
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        ans += vec[i];
    }

    int sumfin = ans;
    for(long long bit=0; bit<(1 << n); bit++){
        int sum=0;
        for(int i=0; i<n; i++){
            if(bit & (1 << i))sum+=vec[i];
        }
        if((ans+1)/2>sum){
            sum=ans-sum;
        }
        if(sumfin>sum){
            sumfin = sum;
        }
    }
    cout << sumfin << endl;
}