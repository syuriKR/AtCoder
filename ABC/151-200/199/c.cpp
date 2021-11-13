#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,t,a,b;
    string s;
    bool judge = true;
    cin >> n >> s >> q;
    for(int i=0; i<q; i++){
        cin >> t >> a >> b;
        if(t==1){
            a--;
            b--;
            if(judge){
                char apart = s[a];
                char bpart = s[b];
                s[b] = apart;
                s[a] = bpart;
            }
            else{
                if(a<n){
                    a+=n;
                }
                else{
                    a-=n;
                }
                if(b<n){
                    b+=n;
                }
                else{
                    b-=n;
                }
                char apart = s[a];
                char bpart = s[b];
                s[b] = apart;
                s[a] = bpart;
            }
        }
        else{
            if(judge){
                judge = false;
            }
            else{
                judge = true;
            }
        }
    }
    if(judge){
        cout << s << endl;
    }
    else{
        s=s.substr(n)+s.substr(0,n);
        cout << s << endl;
    }
}