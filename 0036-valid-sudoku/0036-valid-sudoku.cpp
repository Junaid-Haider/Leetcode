class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            bool visited[9]={false};
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.')
                    continue;
                if(visited[board[i][j]-'0'-1])
                    return false;
                visited[board[i][j]-'0'-1]=true;
            }
        }
        for(int i=0;i<board.size();i++){
            bool visited[9]={false};
            for(int j=0;j<board.size();j++){
                if(board[j][i]=='.')
                    continue;
                if(visited[board[j][i]-'0'-1])
                    return false;
                visited[board[j][i]-'0'-1]=true;
            }
        }
        for(int row=0;row<board.size();row+=3){
            for(int col=0;col<board.size();col+=3){
                bool visited[9]={false};
                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        if(board[i][j]=='.')
                            continue;
                        if(visited[board[i][j]-'0'-1])
                            return false;
                        visited[board[i][j]-'0'-1]=true;
                    }
                }
            }
        }
        return true;
    }
};