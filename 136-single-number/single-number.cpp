class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.empty()) return 0;

        // int i=0;
        // int val;
        // for(int j=1;j<nums.size();j++){
        //     if(nums[i]^nums[j]==0){
        //         i++;
        //     }
        //     else{
        //         val=i;
        //     }
        // }
        // return nums[val];

        int i =0;
        for(int val:nums){
            i=i^val;
        }
        return i;
    }
};