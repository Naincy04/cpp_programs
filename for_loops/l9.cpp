#include<iostream>
using namespace std;

int main(){
    int n,a,r = 0;
    cout<<"Enter s number"<<endl;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        r=r+a;
        n=n/10;
    }
    cout<<"The sum of digits are : "<<r<<endl;
}