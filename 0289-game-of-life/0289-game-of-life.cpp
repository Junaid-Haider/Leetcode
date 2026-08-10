class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int live=0;
                for(int x=-1;x<=1;x++){
                    for(int y=-1;y<=1;y++){
                        if(x==0 && y==0)
                            continue;
                        int row=i+x;
                        int col=j+y;
                        if(row>=0 && row<board.size() && col>=0 && col<board[0].size()){
                            if(board[row][col]==1 || board[row][col]==2)
                                live++;
                        }
                    }
                }
                if(board[i][j]==1){
                    if(live<2 || live>3)
                        board[i][j]=2;
                }
                else{
                    if(live==3)
                        board[i][j]=3;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==2)
                    board[i][j]=0;
                else if(board[i][j]==3)
                    board[i][j]=1;
            }
        }
    }
};