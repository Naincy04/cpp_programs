#include<iostream>
using namespace std;

int main(){
    int i,j,n,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum = sum + j;
        }
    }
    cout<<"The sum of series is : "<<sum<<endl;
}