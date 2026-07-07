class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;

        long long x=0;
        long long sum=0;
        long long mul =1;

        while(n>0){
            int digit = n%10;

            if(digit!=0){
                sum=sum+digit;
                x=x + (digit * mul);
                mul = mul*10;
                
            }
            n=n/10;
        }
        return x*sum;
    }
};