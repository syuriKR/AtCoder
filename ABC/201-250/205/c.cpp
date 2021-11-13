#include <iostream>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(c % 2 == 0) {
        a *= a;
        b *= b;
    }
    cout << ( a>b ? ">" : a<b ? "<" : "=") << endl;
}