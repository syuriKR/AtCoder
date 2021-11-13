#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n/100;
    int b = 100*(a+1)-n;
    cout << b << endl;
}