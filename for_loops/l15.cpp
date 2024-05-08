#include<iostream>
using namespace std;
int main(){
    int i,sum=0,n,prev=0,next=1,term=0;
    
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<prev<<" "<<next<<" ";
    for(i=1;i<n-1;i++)
    {
        term = prev+ next;
        prev = next;
        next = term;
        cout<< term << " ";
    }
}