class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),[](const vector<int>& a, const vector <int>& b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });

        int coveredcount =0;
        int maxend=0;

        for (const auto& curr: intervals){
            if(curr[1]<=maxend){
                coveredcount++;
            }else{
                maxend=curr[1];
            }
        }
        return intervals.size()-coveredcount;
    }
};