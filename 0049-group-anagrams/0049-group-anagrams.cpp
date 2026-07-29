class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for (string s:strs) {
            string st=s;
            sort(st.begin(),st.end());
            mp[st].push_back(s);
        }
        vector<vector<string>> output;
        for (auto &x:mp)
            output.push_back(x.second);
        return output;
    }
};