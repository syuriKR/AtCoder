#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string>vec(n);
    set<string>set;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        vec[i] = s;
        set.insert(s);
    }
    for(int i=0; i<n; i++){
        if(set.count('!'+vec[i])){
            cout << vec[i] << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}