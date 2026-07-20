class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        ans.reserve(candies.size());

        int greatest = *max_element(candies.begin(),candies.end());

       for(int candy: candies){
        if(extraCandies+candy >= greatest){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
       }
        return ans;
    }
};