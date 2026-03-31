class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int>rows(9,0),col(9,0),box(9,0);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.') continue ;

                int digit=board[r][c]-'1';

                int mask=1<<digit-1;
                if(rows[r]&mask || col[c]&mask || box[(r/3)*3+c/3]&mask){
                    return false;
                }
                rows[r] |=mask;
                col[c] |=mask;
                box[(r/3)*3+c/3] |=mask;
            }
        }
        return true;
    }
};
