class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        //Time Optimization tactics
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        //double type to calculate sum of the current window size
        double currentSum=0;

        // calculating sum of the initial window size
        for(int i=0;i<k;i++){
            currentSum= currentSum+nums[i];
        }

        // double type to store the maximum sum of the window slide
        double maxSum= currentSum;

        // calculating the next window sum , int i is being pushed to k th position , and then the next sum is being calculated

        // NOTE the whole window is shifted not just the pointers, it is taken care by nums[i-k] which tells the elements of that window
        
        for(int i=k; i<nums.size(); i++){
            //nums[i] represents the new elements of next window
            // nums[i-k] are the elements of the new window
            currentSum= currentSum + nums[i] - nums[i-k];
            maxSum=max(maxSum,currentSum);
        }
        return maxSum/k;
    }
};