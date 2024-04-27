#include<iostream>
using namespace std;

int main() {
    int start, end, i, j, c = 0, p = 0;
    
    cout << "Enter a number for starting range: ";
    cin >> start;
    cout << "Enter a number for ending range: ";
    cin >> end;
    
    cout << "The prime numbers are: ";
    for (i = start; i <= end; i++) {
        c = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c == 2) {
            cout << i << " ";
            p++;
        }
    }
    cout << endl;
    
    cout << "The total number of prime numbers between " << start << " and " << end << " is: " << p << endl;
}
