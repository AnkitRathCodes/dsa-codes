#include <iostream>
#include <string>
using namespace std;
class stack{
    public:
    char st[10];
    int top;
    void Init(){
        top=-1;
    }
    void IsEmpty(){
    if(top==-1)
        cout<<"Its empty";
    }
    void Push(char n){
        top++;
        st[top]=n;
    }
    void Pop(){
        cout<<st[top]<<"popped";
        top--;
    }
    void display(){
        for(int i=top ; i!=-1 ; i--){
            cout<<st[i]<<" ";
        }
    }
    void Peek(){
        cout<<st[top];
    }

};
int main(){
    stack s;
    s.Init();
    string str  = "Ankit";
    for(int i=0 ; i<str.length() ; i++){
        s.Push(str[i]);
    }
    s.display();
}


#include <iostream>
#include <string>
using namespace std;
class stack{
    public:
    char st[19];
    int top;
    void Init(){
        top=-1;
    }
    void IsEmpty(){
    if(top==-1)
        cout<<"Its empty";
    }
    void Push(char n){
        top++;
        st[top]=n;
    }
    void Pop(){
        //cout<<st[top]<<"popped";
        top--;
    }
    void display(){
        for(int i=top ; i!=-1 ; i--){
            cout<<st[i]<<" ";
        }
    }
    void Peek(){
        cout<<st[top];
    }

};
int main(){
    stack s;
    s.Init();
    string str  = "))(A(nki)t)((";
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]=='('){
            s.Push('a');
        }else if(str[i]==')'){
            s.Pop();
        }
    }
    if(s.top==-1){
        cout<<"balanced";
    }else{
        cout<<"unbalanced";
    }
    
}


#include <iostream>
#include <string>
using namespace std;
class stack{
    public:
    char st[19];
    int top;
    void Init(){
        top=-1;
    }
    void IsEmpty(){
    if(top==-1)
        cout<<"Its empty";
    }
    void Push(char n){
        top++;
        st[top]=n;
    }
    char Pop(){
        return(st[top]);
        //cout<<st[top]<<"popped";
        top--;
    }
    void display(){
        for(int i=top ; i!=-1 ; i--){
            cout<<st[i]<<" ";
        }
    }
    void Peek(){
        cout<<st[top];
    }
    

};
int main(){
    stack s;
    s.Init();
    string str  = "((2+3)*5)";
    char temp;
    while(true){
        temp = cin.get();
        if(temp=='\n'){
            break;
        }
        str+=temp;
    }
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]==')'){
            s.Push('(str[i-2])');
        }else if(str[i]!='('){
            s.Push(str[i]);
        }
    }
    string res;
    char tem;
    for(int i=0 ; i<str.length();i++){
        tem=s.Pop();
        res[i]=tem;
    }
    
    
    
}


#include <iostream>
#include <string>
using namespace std;
bool isdigit(char c){
    if(c > '0' && c < '9' ){
        return true;
    }else{
        return false;
    }
}
class stack{
    public:
    int st[19];
    int top;
    void Init(){
        top=-1;
    }
    void IsEmpty(){
    if(top==-1)
        cout<<"Its empty";
    }
    void Push(char n){
        top++;
        st[top]=n;
    }
    int Pop(){
        return st[top];
        top--;
    }
    void display(){
        for(int i=top ; i!=-1 ; i--){
            cout<<st[i]<<" ";
        }
    }
    void Peek(){
        cout<<st[top];
    }

};
int main(){
    stack s;
    string str = "23+4*"
    for(int i=0 ; i<str.length(); i++){
        int c=str[i];
        if(IsDigit(c)){
            s.Push(c - '0');
        }else{
            int op1=s.Pop();
            int op2=s.Pop();
            if(c== '+'){
                s.Push(op2+op1);
            }else if(c== '-'){
                s.Push(op2-op1);
            }else if(c== '*'){
                s.Push(op2*op1);
            }else if(c== '/'){
                s.Push(op2/op1);
            }
        }
    }
    
}






