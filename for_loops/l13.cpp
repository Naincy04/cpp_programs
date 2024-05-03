#include <iostream> // Including the input/output stream header file
#include <math.h> // Including the math header file for mathematical functions

using namespace std; // Using the standard namespace to avoid writing std::

int main() // Start of the main function
{
    float x, sum, term, fct, y, j, m; // Declaration of float variables 'x', 'sum', 'term', 'fct', 'y', 'j', and 'm'
    int i, n; // Declaration of integer variables 'i' and 'n'
    y = 2; // Initializing 'y' to 2

    // Display a message to find the sum of the series 1 - X^2/2! + X^4/4!-....
    cout << "\n\n Find the sum of the series 1 - X^2/2! + X^4/4!-....:\n";
    cout << "---------------------------------------------------------\n";

    // Prompt the user to input the value of X
    cout << " Input the value of X: ";
    cin >> x; // Read the value of X entered by the user

    // Prompt the user to input the value for nth term
    cout << " Input the value for nth term: ";
    cin >> n; // Read the value for nth term entered by the user

    sum = 1; // Initializing 'sum' to 1
    term = 1; // Initializing 'term' to 1
    cout << " term 1 value is: " << term << endl; // Display the value of the first term which is always 1

    for (i = 1; i < n; i++) // Loop to calculate the series up to the nth term
	{
        fct = 1; // Initializing 'fct' to 1

        for (j = 1; j <= y; j++) // Loop to calculate factorial for the current 'y'
		{
            fct = fct * j; // Calculating the factorial
        }

        term = term * (-1); // Changing the sign of the term in the series alternately
        m = pow(x, y) / fct; // Calculating the term value using the power function and factorial
        m = m * term; // Applying the alternating sign to the term
        cout << " term " << i + 1 << " value is: " << m << endl; // Display the value of the current term
        sum = sum + m; // Add the current term to the sum
        y += 2; // Increment 'y' by 2 for the next iteration (as powers increase by 2 each time)
    }

    // Display the total sum of the series
    cout << " The sum of the above series is: " << sum << endl;

    return 0; // Indicating successful completion of the program
}
