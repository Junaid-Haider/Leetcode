class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>f(26,0);
        for(char x:s){
            f[x-'a']++;
        }
        for(char x:t){
            f[x-'a']--;
        }
        for(int x:f){
            if(x!=0){
                return false;
            }
           
        } return true;
    }
};