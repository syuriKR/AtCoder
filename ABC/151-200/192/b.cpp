#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int size = a.size();
    bool judge = true;
    for(int i=0; i<size; i+=2){
        if(isupper(a[i])){
            judge = false;
        }
    }

    for(int i=1; i<size; i+=2){
        if(islower(a[i])){
            judge = false;
        }
    }

    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}