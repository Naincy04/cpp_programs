class Solution {
public:
    int reverse(int x) {
        int digit, num=0;
        while(x!=0)
        {
            digit = x% 10;
          if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return 0; // Overflow for positive numbers
            }
            if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit < -8)) {
                return 0; // Overflow for negative numbers
            }
            num = num * 10 + digit;
            x = x/ 10;
        }
        return num;
    }
};