bool is_opening(char c){
    if(c=='(' || c=='{' || c=='[')
        return true;
    return false;
}

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(is_opening(s[i]))
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                if(s[i]==')' && st.top()!='(')
                    return false;
                if(s[i]=='}' && st.top()!='{')
                    return false;
                if(s[i]==']' && st.top()!='[')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};