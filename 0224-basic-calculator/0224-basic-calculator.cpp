long long process(long long a,long long b,int sign){
    if(sign==1)
        return a+b;
    return a-b;
}
class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long curr_result=0;
        int curr_sign=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
                continue;
            if(isdigit(s[i])){
                long long num=0;
                while(i<s.size()&&isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                curr_result=process(curr_result,num,curr_sign);
                i--;
                continue;
            }
            else if(s[i]=='('){
                st.push(curr_result);
                st.push(curr_sign);
                curr_result=0;
                curr_sign=1;
            }
            else if(s[i]==')'){
                int sign=st.top();
                st.pop();
                long long old_result=st.top();
                st.pop();
                curr_result=process(old_result,curr_result,sign);
            }
            else{
                if(s[i]=='+')
                    curr_sign=1;
                if(s[i]=='-')
                    curr_sign=-1;
            }
        }
        return curr_result;
    }
};