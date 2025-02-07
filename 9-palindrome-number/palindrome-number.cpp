class Solution {
public:
    bool isPalindrome(int x) {
        long long revN = 0;
        int p = x;
        while( x>0 )
        {
            int ld = x%10;
            revN = (revN * 10) + ld;
            x = x / 10;
        }
        if(revN == p)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};