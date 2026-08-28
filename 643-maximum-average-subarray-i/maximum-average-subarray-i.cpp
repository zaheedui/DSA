class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        double currentSum=0;

        for(int i=0;i<k;i++){
            currentSum= currentSum+nums[i];
        }

        double maxSum= currentSum;

        for(int i=k; i<nums.size(); i++){
            currentSum= currentSum + nums[i] - nums[i-k];
            maxSum=max(maxSum,currentSum);
        }
        return maxSum/k;
    }
};