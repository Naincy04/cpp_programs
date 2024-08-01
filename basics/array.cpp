#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    int a[n];
    cout << "Enter" << endl;
    cin >> n;
    cout<<" "<<endl;
    cout << "Enter elemnts" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(j=n-1;j>=0;j--)
    {
        cout<<a[j];
    }
    
    return 0;
}
