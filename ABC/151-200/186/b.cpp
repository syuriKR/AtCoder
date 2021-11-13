#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int amin = 100100100;
    int all = 0;
    for(int i=0; i<h*w; i++){
        int a;
        cin >> a;
        all += a;
        amin = min(a,amin);
    }
    cout << all - amin*h*w << endl;
}