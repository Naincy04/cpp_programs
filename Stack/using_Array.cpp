#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int top;
    int arr[5];
    Stack(){
        top = -1;
        for(int i = 0; i < 5; i++){
            arr[i] = 0;
        }
    }
    void push(int element){
        if(top > 4)
            cout << "Stack overflow" << endl;
        else 
            top++;
            arr[top] = element;
    }
    int pop(){
        if(top == -1)
            cout<<"Stack Underflow"<<endl;
        else 
            top--;
    }

};
int main(){
    Stack s;
    s.push(22);
    s.push(45);
    s.push(12);
    cout<<s.pop()<<endl;
}