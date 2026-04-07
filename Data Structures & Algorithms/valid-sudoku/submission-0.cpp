class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0;i<9;i++){
            unordered_set<char> check_row;
            for (int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }else if(check_row.find(board[i][j])==check_row.end()){
                    check_row.insert(board[i][j]);
                }else{
                    return false;
                }
            }

        }
        
        for(int i = 0;i<9;i++){
            unordered_set<char> check_coloumn;
            for (int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }else if(check_coloumn.find(board[j][i])==check_coloumn.end()){
                    check_coloumn.insert(board[j][i]);
                }else{
                    return false;
                }
            }

        }
        
        for(int i = 0;i<9;i+=3){
            
            for(int l = 0; l<9;l+=3){
                unordered_set<char> check3x3;
                for(int j = 0;j<3;j++){
                    for(int k = 0; k<3;k++){
                    if(board[j+l][k+i]=='.'){
                        continue;
                        }else if(check3x3.find(board[j+l][k+i])==check3x3.end()){
                            check3x3.insert(board[j+l][k+i]);
                        }else{
                            return false;
                        } 
                    }
                    }
            }
        }
        return true;

        
        
    }

};
