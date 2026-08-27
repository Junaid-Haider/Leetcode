class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        st.push(stoi(tokens[0]));
        int i=1;
        while(i<tokens.size()){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
                st.push(stoi(tokens[i]));
            else{
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();
                if(tokens[i]=="+")
                    st.push(first+second);
                else if(tokens[i]=="-")
                    st.push(first-second);
                else if(tokens[i]=="*")
                    st.push(first*second);
                else if(tokens[i]=="/")
                    st.push(first/second);
            }
            i++;
        }
        return st.top();
    }
};