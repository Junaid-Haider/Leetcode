class Solution {
public:
    string simplifyPath(string path) {
        vector<string> simple_path;
        int i=0;
        while(i<path.size()){
            string curr_word="";
            while(i<path.size() && path[i]=='/')
                i++;
            while(i<path.size() && path[i]!='/'){
                curr_word+=path[i];
                i++;
            }
            if(curr_word==".")
                continue;
            if(curr_word==".."){
                if(!simple_path.empty())
                    simple_path.pop_back();
            }
            else if(!curr_word.empty())
                simple_path.push_back(curr_word);
        }
        string output;
        for(string x:simple_path){
            output+="/"+x;
        }
        if(output.empty())
            return "/";
        return output;
    }
};