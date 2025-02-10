class Solution {
public:
    bool isPalindrome(string s) {
          string result;
        
        // Step 1: Convert to lowercase and keep only alphanumeric characters
        for (char ch : s) {
            if (isalnum(ch)) {
                result.push_back(tolower(ch)); // Correct way to append characters
            }
        }

        // Step 2: Check if result is a palindrome
        int left = 0, right = result.length() - 1;
        while (left < right) {
            if (result[left] != result[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }
        
        return true;
    }

    
};