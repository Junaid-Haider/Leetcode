class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> output;
        if(words.empty() || s.empty())
            return output;
        int word_length=words[0].size();
        int word_count=words.size();
        unordered_map<string,int> need;
        for(string &w:words)
            need[w]++;
        for(int offset=0;offset<word_length;offset++){
            unordered_map<string,int> window;
            int left=offset;
            int count=0;
            for(int right=offset;right+word_length<=s.size();right+=word_length){
                string word=s.substr(right,word_length);
                if(need.count(word)){
                    window[word]++;
                    count++;
                    while(window[word]>need[word]){
                        string left_word=s.substr(left,word_length);
                        window[left_word]--;
                        left+=word_length;
                        count--;
                    }
                    if(count==word_count){
                        output.push_back(left);
                        string left_word=s.substr(left,word_length);
                        window[left_word]--;
                        left+=word_length;
                        count--;
                    }
                }
                else{
                    window.clear();
                    count=0;
                    left=right+word_length;
                }
            }
        }
        return output;
    }
};