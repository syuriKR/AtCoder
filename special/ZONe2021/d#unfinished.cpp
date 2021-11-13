#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sizes = s.size();
    vector<char>vec(sizes);
    for(int i=0; i<sizes; i++){
        if(s[i]!='R'){
            vec.push_back(s[i]);
        }
        else{
            reverse(vec.begin(),vec.end());
        }
    }
    int sizevec = vec.size();
    for(int i=0; i<sizevec-1; i++){
        if(s[i]==s[i+1]){
            
        }
    }
}