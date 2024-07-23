class Solution {
public:
    int hammingWeight(int n) {
        
        int a = 0,b=0,c=0;
        while(n!=0)
        {
            a = n/2;
            b= n%2;
            if(b==1)
            {
                c++;
            }
            n=a;
        }
        int result = c;
        return result;
    }
};