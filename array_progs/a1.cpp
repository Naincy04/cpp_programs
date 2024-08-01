//Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
using namespace std;

int main(){
int n,i,max = 0;
  cout<<"Enter the length of an array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array: ";
  for(i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  for(i=0; i<n; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  cout<<"The largest element of the array is: "<<max<<endl;
}