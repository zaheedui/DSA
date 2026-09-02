class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int left=0;
      int zerocount=0;
      int maxLength=0;
      
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zerocount++;
        }
        while (zerocount > k){
            if(nums[left]==0){
                zerocount--;
            }
            left++;
        }
        maxLength=max(maxLength,i-left+1);
      }
return maxLength;

// int i=0; 
//         int j = 0;
        
       
//         int n = nums.size();
//         while (j < n)
//         {
//             if(nums[j] == 0)
//             {
//                 k--;
//             }
//             if (k < 0)
//             {
//                 if (nums[i] == 0)
//                     k++;
//                 i++;
//             }
//             j++;
            
//         }

//         return j-i;
    }
};