#include<stdio.h>
using namespace std;
int sum_digits(int n)
{
    if(n<9)
    {
        return n;
    }
    else
    {
        return n%10 + sum_digits(n/10);
    }
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The sum of digits of given number %d are : %d\n",n,sum_digits(n));
}





