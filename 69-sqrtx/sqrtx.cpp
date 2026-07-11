class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        
        int high=x/2;
        int low=1;
        int ans=0;

        while(low<=high){
            long long mid=low+(high-low)/2;
            long long sq=mid*mid;

            if(sq==x) return mid;

            if(sq<x){
                ans=mid;
                low=mid+1;
            }
            if(sq>x){
                high=mid-1;
            }
        }
        return ans;
    }
};