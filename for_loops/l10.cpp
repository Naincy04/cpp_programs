#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i;
    float sum = 0.0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum + 1/(pow(i,i));
    }
    cout<<"The sum of the series "<< sum << endl;
}