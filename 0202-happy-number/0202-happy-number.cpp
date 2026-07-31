int next_number(int n){
    int num=0;
    while(n>0){
        int digit=n%10;
        num+=(digit*digit);
        n/=10;
    }
    return num;
}

class Solution {
public:
    bool isHappy(int n) {
        int slow=n,fast=n;
        while(true){
            slow=next_number(slow);
            fast=next_number(next_number(fast));
            if(fast==1)
                return 1;
            if(slow==fast)
                return 0;
        }
    }
};
