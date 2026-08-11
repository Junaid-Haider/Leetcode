class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sTot[256]={0};
        int tTos[256]={0};
        for(int i=0;i<t.size();i++){
            if(sTot[s[i]]==0)
                sTot[s[i]]=t[i];
            else{
                if(sTot[s[i]]!=t[i])
                    return false;
            }  
            if(tTos[t[i]]==0)
                tTos[t[i]]=s[i];
            else{
                if(tTos[t[i]]!=s[i])
                    return false;
            }   
        }
        return true;      
    }
};