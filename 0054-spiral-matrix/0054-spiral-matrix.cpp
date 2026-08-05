class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int right=matrix[0].size()-1;
        int left=0;
        int bottom=matrix.size()-1;
        vector<int> spiral;
        while(true){
            for(int j=left;j<=right;j++)
                spiral.push_back(matrix[top][j]);
            top++;
            if(top>bottom)
                break;
            for(int j=top;j<=bottom;j++)
                spiral.push_back(matrix[j][right]);
            right--;
            if(left>right)
                break;
            for(int j=right;j>=left;j--)
                spiral.push_back(matrix[bottom][j]);
            bottom--;
            if(top>bottom)
                break;
            for(int j=bottom;j>=top;j--)
                spiral.push_back(matrix[j][left]);
            left++;
            if(left>right)
                break;
        }
        return spiral;
    }
};