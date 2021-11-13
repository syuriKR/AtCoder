#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0]==s[1] && s[0]==s[2] &&s[0]==s[3] &&s[0]==s[1]){
        cout << "Weak" << endl;
        return 0;
    }
    int num = stoi(s);
    int th = num/1000;
    int hun = (num-th*1000)/100;
    int ten = (num-th*1000-hun*100)/10;
    int one = (num-th*1000-hun*100-ten*10);

    int judge = 0;
    if((th+1)%10==(hun)%10){
        judge++;
    }
    if((th+2)%10==(ten)%10){
        judge++;
    }
    if((th+3)%10==(one)%10){
        judge++;
    }

    if(judge==3){
        cout << "Weak" <<endl;
        return 0;
    }

    // if(th==10){
    //     th+=10;
    // }
    // if(hun==10){
    //     hun+=10;
    // }
    // if(ten==10){
    //     ten+=10;
    // }
    // if(one==10){
    //     one+=10;
    // }
    // if(th++==hun){
    //     cout << "Weak" << endl;
    //     return 0;
    // }
    // if(hun++==ten){
    //     cout << "Weak" << endl;
    //     return 0;
    // }
    // if(ten++==one){
    //     cout << "Weak" << endl;
    //     return 0;
    // }
    // if(one++==th){
    //     cout << "Weak" << endl;
    //     return 0;
    // }
    cout << "Strong" <<endl;
}