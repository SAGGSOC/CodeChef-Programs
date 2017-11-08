#include <stack>
#include <iostream>
using namespace std;

bool op(char x){
    return (x=='('||x=='^'||x=='*'||x=='/'||x=='+'||x=='-'||x==')');
}

bool precedence(char a,char b){ //Can b come over a
    if(a=='('||b=='('||b=='^')return true;
    if(a=='^')return false;
    switch(a){
    case '*':
    case '/':
        return false;
    default:
        switch(b){
        case '*':
        case '/':
            return true;
        default:
            return false;
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        string exp;cin>>exp;
        string ans="";
        stack <char> s;
        for(int i=0;i<exp.size();++i){
            if(op(exp[i])){
                if(exp[i]==')'){
                    while(s.top()!='('){
                        ans+=s.top();
                        s.pop();
                    }
                    s.pop();
                }
                else{
                    while(!s.empty()&&!precedence(s.top(),exp[i])){
                        ans+=s.top();s.pop();
                    }
                    s.push(exp[i]);
                }
            }
            else ans+=exp[i];
        }
        while(!s.empty()){
            ans+=s.top();s.pop();
        }
        cout<<ans<<endl;
    }
}

