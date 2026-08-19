class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    //   int first=INT_MAX;
    //   int second=INT_MAX;

    //   for(int j=0;j<nums.size();j++){
    //     if(nums[j]<=first){
    //         first=nums[j];
    //     }
    //     else if(nums[j]<=second){
    //         second=nums[j];
    //     }
    //     else{
    //         return true;
    //     }
    //   }
    //   return false;

    //APPROACH 2

    int first=INT_MAX;
    int second=INT_MAX;
    for(int num:nums){
        if(num<=first) first=num;
        else if(num<=second) second=num;
        else return true;
    }
        return false;
    }
};