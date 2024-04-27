#include<iostream>
using namespace std;

int main(){
    int n,i,r=1;
    cout<<"Enter a number "<<endl;
    cin>>n;
   
    for(i=1;i<=n;i++)
    {
        r=r*i;
    }
    cout<<"The factorial of " <<n<< " is : "<< r << endl;
}