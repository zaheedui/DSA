class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;

        int i=0;
        int j=nums.size()-1;

        while(i<=j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
            }
            else{
                i++;
            }
        }
        return i;
}
};