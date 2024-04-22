#include<iostream>
using namespace std;

int palin(string input,int start, int end){

    //This is the base case of the recursive function. If start is greater than or equal to end, it means we have traversed the entire string, and the function returns 1, indicating that the string is a palindrome.
      if (start >= end) {
        return 1; 
    }
   if(input[start]==input[end])
   {
    return palin(input,start+1,end-1);
   }    
    else
    {
        return 0;
    }
}
int main(){

    string input;
    cout<<"Enter the string "<<endl;
    getline(cin,input);
    int n = input.length();
    int result = palin(input,0,n-1);
    if(result == 1)
    {
        cout<<"The string is palindrome"<<endl;
    }
    else
    {
        cout<<"The string is not palindrome"<<endl;
    }
}