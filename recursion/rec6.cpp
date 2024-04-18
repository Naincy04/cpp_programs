

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // getline() reads the whole line, including spaces

    cout << "You entered: " << input << endl;

    return 0;
}
