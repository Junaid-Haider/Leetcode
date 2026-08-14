class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> sr;
        for(int i=0; i<nums.size();){
            int start=i;
            while(i+1<nums.size()&&nums[i]+1==nums[i+1])
                i++;
            if(start==i)
                sr.push_back(to_string(nums[i]));
            else
                sr.push_back(to_string(nums[start])+"->"+ to_string(nums[i]));
            i++;
        }
        return sr;
    }
};