class Solution {
public:
    int bitwiseComplement(int n) {
         
         int ans = 0,i=0;
         if(n==0)
         {
            return 1;
         }
         while(n!=0)
         {
            int bit = n&1;
            if(bit == 0)
            {
                ans = ans + pow(2,i);
            }
            n = n >> 1;
            i++;
         }
         return ans;
    }
};