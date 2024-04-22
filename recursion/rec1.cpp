#include<iostream>
using namespace std;

int array_sum(int arr[], int n){
    if(n==0){
        return 0;
    }
    return arr[n-1] + array_sum(arr, n-1);
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }   
    printf("The sum of the elements of the array is: %d\n", array_sum(arr, n));
}