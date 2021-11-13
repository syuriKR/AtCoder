#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w,n;
    vector<int>A(101010),B(101010);
    cin >> h >> w >> n;
    for(int i=0; i<n; i++){
        cin >> A[i] >> B[i];
    }

    vector<int>ys;
    for(int i=0; i<n; i++)ys.push_back(A[i]);
    sort(ys.begin(),ys.end());
    ys.erase(unique(ys.begin(),ys.end()),ys.end());
    for(int i=0; i<n; i++)A[i]=lower_bound(ys.begin(), ys.end(), A[i])-ys.begin();

    vector<int>xs;
    for(int i=0; i<n; i++)xs.push_back(B[i]);
    sort(xs.begin(),xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    for(int i=0; i<n; i++)B[i]=lower_bound(xs.begin(), xs.end(), B[i])-xs.begin();

    for(int i=0; i<n; i++)cout << A[i]+1 << ' ' << B[i]+1 << endl;
}