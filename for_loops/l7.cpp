#include<iostream>
using namespace std;

int main(){
    int i,j,n,c;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=n-1;i>=1;i--)
    {
        c=0;
        for(j=i;j>=1;j--)
        {
            if(i%j == 0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"The last prime number that occurs before the entered number "<<i<<endl;
            break;
        }
    }
}