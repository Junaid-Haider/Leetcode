class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        int i=0;
        int j=1;
        while(j<nums.size()){
           if(nums[i]!=nums[j]){
                nums[++i]=nums[j];
           }
           j++;
        }
        return i+1;
    }
    
};