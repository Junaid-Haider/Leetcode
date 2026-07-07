class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0){
            if(nums.size()>1)
                return false;
            return true;
        }
        int curr_index=0;
        int stuck=-1;
        for(int i=0;i<nums.size()-1;){
            if(curr_index==stuck){
                return false;
            }
            if(nums[i]==0 ){
                if(i>=stuck)
                    stuck=i;
                i=++curr_index;
            }
            i+=nums[i];
        }
        return true;
    }
};