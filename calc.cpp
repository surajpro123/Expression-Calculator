#include <iostream>
using namespace std;


//stage 1 for addition and subtraction of two integer 
int main(){
    string s;
    cin>>s;
    int i=0;
    int num=0;
    while(i<s.size() && s[i]-'0'>=0 && s[i]-'0'<=9) {
        num=num*10+s[i]-'0';
        i++;
    }
    int ans=num;
    num=0;
    char op=s[i++];
   while(i<s.size()){
        if(s[i]=='+' || s[i]=='-') {
            if(op=='+') ans+=num;
            else ans-=num;
            op=s[i];
            num=0;
        }
        else if(s[i]-'0'<=9 && s[i]-'0'>=0) {
            num=num*10+s[i]-'0';
        }
        i++;
    }
    if(op == '+')
        ans += num;
    else
        ans -= num;
    cout<<ans<<endl;
}