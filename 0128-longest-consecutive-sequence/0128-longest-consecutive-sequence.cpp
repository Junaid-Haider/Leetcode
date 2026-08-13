class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int length=0;
        for(int num:st){
            if(!st.count(num-1)){
                int curr_num=num;
                int curr_length=1;
                while(st.count(curr_num+1)){
                    curr_num++;
                    curr_length++;
                }
                length=max(length,curr_length);
            }
        }
        return length;
    }
};