class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0;
        int total_cost=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_cost>total_gas){
            return -1;
        }
        int index=0;
        int curr_balance=0;
        for (int i=0;i<gas.size();i++) {
            curr_balance+=gas[i]-cost[i];
            if(curr_balance<0){
                index=i+1;
                curr_balance=0;
            }
        }
        return index;
    }
};