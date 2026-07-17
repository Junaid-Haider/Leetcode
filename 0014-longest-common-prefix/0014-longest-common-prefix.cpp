class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        int shortest_length=INT_MAX;
        for(auto x:strs){
            if(x.size()<shortest_length)
                shortest_length=x.size();
        }
        for(int i=0;i<shortest_length;i++){
            char curr=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(curr!=strs[j][i])
                    return prefix;
            }
            prefix+=curr;
        }
        return prefix;
    }
};