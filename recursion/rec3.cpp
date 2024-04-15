#include<stdio.h>
using namespace std;
int fibo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The fibonacci series of given number %d is %d\n : ",n,fibo(n));
}