#include<iostream>
using namespace std;

int main(){
    int n, i, sum =0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"The natural numbers upto n terms are : "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
        sum = sum + i;
    }
    cout<<"The sum of natural numbers upto n :"<<sum<<endl;
}