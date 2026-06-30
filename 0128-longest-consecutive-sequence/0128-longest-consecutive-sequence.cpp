class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int seq=0;
        for(auto x:st){
            if(!st.count(x-1)){
                int curr_seq=1;
                int curr_num=x;
                while(st.count(curr_num+1)){
                    curr_seq++;
                    curr_num++;
                }
                seq=max(seq,curr_seq);
            }
        }
        return seq;
    }
};