class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>grid[9];

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    if(!row[i].count(board[i][j])){
                        row[i].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }

                    if(!col[j].count(board[i][j])){
                        col[j].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }

                    int gridIndex = (i/3)*3 + (j/3);

                    if(!grid[gridIndex].count(board[i][j])){
                        grid[gridIndex].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                }
            }
        }



    }
};
