class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> cTos;
        unordered_map<string,char> sToc;
        int j=0;
        for(int i=0;i<pattern.size();i++){
            if(j>=s.size())
                return false;
            string word;
            for(;j<s.size() && s[j]!=' ';j++)
                word+=s[j];
            if(!cTos.count(pattern[i]))
                cTos[pattern[i]]=word;
            else if(cTos[pattern[i]]!=word)
                return false;
            if(!sToc.count(word))
                sToc[word]=pattern[i];
            else if(sToc[word]!=pattern[i])
                return false;
            if(j<s.size())
                j++;
        }
        if(j<s.size())
            return false;
        return true;
    }
};