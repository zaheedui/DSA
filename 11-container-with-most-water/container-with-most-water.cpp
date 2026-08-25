class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int n=height.size();

        int ans=0;
        while(i<j){
            int prod=0;
            if(height[i]>height[j]){
                prod=(j-i)*height[j];
                j--;
                
            }
            else{
                prod=(j-i)*height[i];
                i++;
                
            }
            if(prod>ans){
                ans=prod;
            }
        }
        return ans;
    }
};