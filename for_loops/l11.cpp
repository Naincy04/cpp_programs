#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<"The sum of series is : "<<sum<<endl;

}