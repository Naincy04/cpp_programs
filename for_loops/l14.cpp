#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum = 9,c=0,i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        c=c+sum;
        sum = sum + pow(10,i)*9;
        cout<<sum<<endl;
    }
    cout<<"The sum of series are : "<<c<<endl;
}