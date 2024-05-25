#include<iostream>
using namespace std;

int main(){
    int i,j,n,c=1,k;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int p=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=p;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
        p--;
    }
}