class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<string> strs(numRows);
        int j=0;
        bool increment=true;
        for(int i=0;i<s.size();i++){
            if(j==0)
                increment=true;
            if(j==numRows-1)
                increment=false;
            strs[j]+=s[i];
            if(increment)
                j++;
            else
                j--;
        }
        string zigzag="";
        for(int i=0;i<numRows;i++){
            zigzag+=strs[i];
        }
        return zigzag;
    }
};