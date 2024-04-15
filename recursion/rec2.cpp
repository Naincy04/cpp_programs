#include<stdio.h>
using namespace std;


int factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The factorial of given number %d is: %d\n",n,factorial(n));
}