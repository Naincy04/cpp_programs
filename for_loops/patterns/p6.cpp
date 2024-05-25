#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    int p =n-1;
    for(i=1;i<=n;i++)
    {
        for(j=p;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        p--;
    }
}