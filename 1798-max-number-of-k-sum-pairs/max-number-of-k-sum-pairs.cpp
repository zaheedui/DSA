class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());
        
        // int i = 0;
        // int j = nums.size() - 1;
        // int ans = 0;

        // while (i < j) {
        //     int sum = nums[i] + nums[j];
            
        //     if (sum == k) {
        //         ans++;
        //         i++;
        //         j--;
        //     } else if (sum < k) {
        //         i++; // Need a bigger number
        //     } else {
        //         j--; // Need a smaller number
        //     }
        // }

        // return ans;

        unordered_map<int,int> count;
        int ans=0;

        for(int num:nums){
            int compliment =k-num;

            if(count[compliment]>0){
                ans++;
                count[compliment]--;
            }else{
                count[num]++;
            }
        }
        return ans;
    }
};