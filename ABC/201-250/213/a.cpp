#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    bitset<10>abit(a);
    bitset<10>bbit(b);
    for(int i=0; i<256; i++){
        bitset<10>ibit(i);
        auto judge = abit^bbit;
        if(judge==ibit){
            cout << i << endl;
            return 0;
        }
    }
}