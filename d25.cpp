#include<iostream>
#include<string>
using namespace std;

class Stack{
    public:
    const static int size=100;
    int top=-1;
    char arr[size];

    
    void push(char val){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }

    char pop(){
        char c;
        if(top==-1){
            cout<<"stack is empty"<<endl;
            
        }
        else{
           
            c=arr[top];
            top--;
        }
        return c;
    }

    void display(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        else{
            cout<<"Stack contains : ";
            for(int i=0;i<=top;i++){
                cout<<arr[i];
            }
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    string s1;
    cout<<"Enter a string :"<<endl;
    getline(cin,s1);
    cout<<"Your string is :"<<s1<<endl;
    string org;
    for(int i=0;i<s1.size();i++){
        char ch=s1[i];
        
        if(ch>='a' and ch<='z'){
            ch=(char)(ch-'a'+'A');
            
        }
        if(ch>='A' and ch<='Z'){
        s.push(ch);
        org.push_back(ch);
        }
    }
    s.display();
    cout<<"The original string is :"<<org<<endl;
    string s2="";
    while(s.top!=-1){
        s2.push_back(s.pop());
    }
    
    cout<<"Reversed string is :"<<s2<<endl;
    if(s2==org){
        cout<<"String is palindrome"<<endl;
}
    else{
        cout<<"Not a palindrome"<<endl;
    }
}
