#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    for(int i=1; i<=n; i++){
        bool judge = true;
        int num = i;
        while(true){
            if(num>=8){
                if(num%8==7){
                    judge = false;
                    break;
                }
                else{
                    num/=8;
                }
            }
            else{
                if(num==7){
                    judge = false;
                }
                break;
            }
        }

        string s = to_string(i);
        int size = s.size();
        for(int i=0; i<size; i++){
            if(s[i]=='7'){
                judge = false;
            }
        }

        if(judge)ans++;
    }
    cout << ans << endl;
}