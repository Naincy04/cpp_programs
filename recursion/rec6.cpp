#include<iostream>
#include<string>
using namespace std;


void reverse(string &input,int start, int end){
     if (start >= end) 
        return;
    swap(input[start],input[end]);
    reverse(input,start+1,end-1);
}
int main(){
    string input;

    cout<<"Enter a String"<<endl;
    getline(cin,input);
    int n = input.length();
    reverse(input,0,n-1);
    cout<<"After reversing the string\n"<<input<<endl;
}