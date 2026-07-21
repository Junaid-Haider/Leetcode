class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> justified;
        int i=0;
        while(i<words.size()){
            int j=i;
            int letters=0;
            while(j<words.size()){
                if((letters+words[j].size()+(j-i)) > maxWidth)
                    break;
                letters+=words[j].size();
                    j++;
            }
            int gaps=j-i-1;
            string line;
            if(j==words.size() || gaps==0){
                for(int k=i;k<j;k++){
                    line+=words[k];
                    if(k!=j-1)
                        line+=' ';
                }
                while(line.size()<maxWidth)
                    line+=' ';
            }
            else{
                int spaces=(maxWidth-letters)/gaps;
                int extra=(maxWidth-letters)%gaps;
                for(int k=i;k<j;k++){
                    line+=words[k];
                    if(k!=j-1){
                        for(int in=0;in<spaces;in++)
                            line+=' ';
                        if(extra>0){
                            line+=' ';
                            extra--;
                        }
                    }
                }
            }
            justified.push_back(line);
            i=j;
        }
        return justified;
    }
};