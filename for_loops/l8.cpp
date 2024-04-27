#include<iostream>
using namespace std;

int main(){
    int n1,n2,j,p;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    for(j=1;j<=n1;j++)
    {
        if(n1 % j == 0 && n2 % j == 0)
        {
            p=j;
        }
    }
    cout<<"The greatest common divisor is "<< p << endl;
}