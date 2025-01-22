#include <climits> // For INT_MAX and INT_MIN

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        }

        int original = x; // Store the original number
        int num = 0;      // Initialize num to 0

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow before multiplying num by 10
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return false; // Overflow would occur, so return false
            }

            num = num * 10 + digit;
            x = x / 10;
        }

        // Check if the reversed number is equal to the original
        return num == original;
    }
};
