#include<bits/stdc++.h>
using namespace std;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    for(int i=0; i<10; i++){
        if(s[i] == 'o'){
            ans1++;
        }
        else if(s[i]=='x'){
            ans2++;
        }
        else{
            ans3++;
        }
    }

    int ans;
    if(ans1>4){
        ans = 0;
    }

    if(ans1 == 4){
        ans = 24;
    }

    if(ans1 == 3){
        ans = (facctorialMethod(4)/facctorialMethod(2))*3+facctorialMethod(4)*ans3;
    }

    if(ans1 == 2){
        int use = ans1+ans3;
        ans = use*use*use*use-((use-1)*(use-1)*(use-1)*(use-1))*2+(use-2)*(use-2)*(use-2)*(use-2);
    }
    if(ans1 == 1){
        int use = ans1+ans3;
        ans = use*use*use*use-(use-1)*(use-1)*(use-1)*(use-1);
    }

    if(ans1 == 0){
        ans = ans3*ans3*ans3*ans3;
    }

    cout << ans <<endl;
}