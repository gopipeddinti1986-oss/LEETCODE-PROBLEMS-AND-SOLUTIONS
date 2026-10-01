class Solution {
public:

    // bool IsValid(int row, int col, int n, vector<string> board){
    //     int tempr = row, tempc = col;

    //     //top
    //     while(tempr >= 0){
    //         if(board[tempr][col] == 'Q'){
    //             return false;
    //         }
    //         tempr--;
    //     }

    //     //top left
    //     tempr = row, tempc = col;
    //     while(tempr >= 0 && tempc >= 0){
    //         if(board[tempr][tempc] == 'Q'){
    //             return false;
    //         }
    //         tempr--;
    //         tempc--;
    //     }

    //     //top right
    //     tempr = row, tempc = col;
    //     while(tempr >= 0 && tempc < n){
    //         if(board[tempr][tempc] == 'Q'){
    //             return false;
    //         }
    //         tempr--;
    //         tempc++;
    //     }

    //     return true;
    // }

    void Solve(int row,int n, vector<vector<string>>& res, vector<string>& board, vector<int>&c, vector<int>&rd, vector<int>&ld){
        if(row == n){
            res.push_back(board);
            return;
        }

        for(int col = 0; col < n; col++){
            if(c[col] == 0 && rd[row+col] == 0 && ld[row-col + (n-1)] == 0){
                c[col] = 1, rd[row+col] = 1, ld[row-col + (n-1)] = 1;
                board[row][col] = 'Q';
                Solve(row+1, n, res, board, c, rd, ld);
                c[col] = 0, rd[row+col] = 0, ld[row-col + (n-1)] = 0;
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board;

        string s;
        for(int i = 0; i<n; i++){
            s.push_back('.');
        }
        for(int i = 0; i<n; i++){
            board.push_back(s);
        }

        vector<int> cols(n, 0);
        vector<int> rd(2*n - 1, 0);
        vector<int> ld(2*n - 1, 0);
        Solve(0, n, res, board, cols, rd, ld);
        return res;
    }
};