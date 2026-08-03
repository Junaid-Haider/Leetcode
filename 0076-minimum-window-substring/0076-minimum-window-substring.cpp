class Solution {
public:
    string minWindow(string s, string t) {
        int arr[128]={0};
        for(char x:t)
            arr[x]++;
        int left=0;
        int right=0;
        int start=-1;
        int min_len=INT_MAX;
        int count=0;
        while(right<s.size()){
            if(arr[s[right]]>0)
                count++;
            arr[s[right]]--;
            while(count==t.size()){
                if(right-left+1<min_len){
                    min_len=right-left+1;
                    start=left;
                }
                arr[s[left]]++;
                if(arr[s[left]]>0)
                    count--;
                left++;
            }
            right++;
        }
        if(start==-1)
            return "";
        return s.substr(start,min_len);
    }
};