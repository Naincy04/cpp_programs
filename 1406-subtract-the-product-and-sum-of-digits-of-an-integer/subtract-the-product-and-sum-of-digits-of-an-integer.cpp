class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int a=0,s=0,p=1,result =0;
        while(n!=0)
        {
            a=n%10;
            s=s+a;
            p=p*a;
            n=n/10;
        }
        result = p - s;
        return result;
    }
};