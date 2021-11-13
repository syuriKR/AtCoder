#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int donut;
    int rest_donut;
    int all_donut_1 = 0;
    int min_donut = 1010;
    for(int i=0; i<n; i++){
        cin >> donut;
        all_donut_1+=donut;
        if(donut<min_donut)min_donut=donut;
    }
    rest_donut=(x-all_donut_1)/min_donut;
    cout << n+rest_donut << endl;
}