class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0;i<9;i++){
            unordered_set<char> check_row;
            for (int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }if(check_row.count(board[i][j])) return false;
                check_row.insert(board[i][j]);
            }

        }
        
        for(int i = 0;i<9;i++){
            unordered_set<char> check_coloumn;
            for (int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }if(check_coloumn.count(board[j][i])) return false;
                check_coloumn.insert(board[j][i]);
            }

        }
        
        for(int i = 0;i<9;i+=3){
            
            for(int l = 0; l<9;l+=3){
                unordered_set<char> check3x3;
                for(int j = 0;j<3;j++){
                    for(int k = 0; k<3;k++){
                    if(board[j+l][k+i]=='.'){
                        continue;
                        }if(check3x3.count(board[l + j][i + k])) return false;
                check3x3.insert(board[l + j][i + k]);
                    }
                    }
            }
        }
        return true;

        
        
    }

};
