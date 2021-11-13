#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int>set1;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        set1.insert(a);
    }
    int ans = set1.size();
    cout << ans << endl;
}