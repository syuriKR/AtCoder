#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    map<int,int>m;
    for(int i=0; i<k; i++){
        m[vec[i]]++;
    }
    int ans = m.size();

    for(int i=0; i<n-k; i++){
        m[vec[i]]--;
        m[vec[i+k]]++;
        if(m[vec[i]]==0){
            m.erase(vec[i]);
        }
        ans = max(ans,(int)m.size());
    }

    cout << ans << endl;
}