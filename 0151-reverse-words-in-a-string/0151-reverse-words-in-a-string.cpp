class Solution {
public:
    string reverseWords(string s) {
        string reversed="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ')
                continue;
            int end=i;
            while(i>=0&&s[i]!=' ')
                i--;
            if(!reversed.empty())
                reversed+=' ';
            for(int j=i+1;j<=end;j++)
                reversed+=s[j];
        }
        return reversed;
    }
};