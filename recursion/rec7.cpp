#include<iostream>
using namespace std;

int power(int n, int p) {
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}

int main() {
    int n, p;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    int result = power(n, p);
    cout << n << " raised to the power of " << p << " is: " << result << endl;
    return 0;
}
