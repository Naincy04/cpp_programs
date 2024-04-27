#include<iostream>
using namespace std;

int main(){
    int i,j,sum=0;
    for(i=1;i<=500;i++)
    {
        sum = 0;
        for(j=1;j<i;j++)
        {
            if(i%j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum==i)
        {
            cout<<"Perfect numbers is : "<<i<<endl;
        }
    }
}