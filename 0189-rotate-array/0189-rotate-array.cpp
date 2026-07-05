void rotateArr(vector<int>& arr,int start,int end){
    while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
    }
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        if(k==0)
            return;
        rotateArr(nums,0,nums.size()-1);
        rotateArr(nums,0,k-1);
        rotateArr(nums,k,nums.size()-1);
    }
};

