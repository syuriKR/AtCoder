#include<bits/stdc++.h>
using namespace std;

int A,B;

int main(){
  cin >> A >> B;
  int C = A+B;
  if(C>=15 && B>=8){
    cout << 1 << endl;
  }
  else if(C>=10 && B>=3){
    cout << 2 << endl;
  }
  else if(C>=3){
    cout << 3 << endl;
  }
  else{
    cout << 4 << endl;
  }
}
    