bool compare(const vector<int>& a,const vector<int>& b){
    return a[1] < b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrows=1;
        sort(points.begin(),points.end(),compare);
        int curr=points[0][1];
        for(int i=1;i<points.size();i++){
            if(curr>=points[i][0])
                continue;
            arrows++;
            curr=points[i][1];
        }
        return arrows;
    }
};