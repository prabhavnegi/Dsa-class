class Solution {
public:    
    int numRookCaptures(vector<vector<char>>& board) {
        int cap=0,rpos,cpos;
        for(int i = 0; i < 8; i ++){
            for(int j = 0; j < 8; j ++){
                if(board[i][j] == 'R')
                {
                    rpos = i;
                    cpos = j;
                    break;
                }
            }
        }
        int i = rpos,j = cpos;
        while(i >= 0 && board[i][j] != 'B')
        {
            if(board[i][j] == 'p'){
                cap++; 
                break;
            }
            i--;
        }
        
        i = rpos,j = cpos;
        while(i < 8 && board[i][j] != 'B')
        {
            if(board[i][j] == 'p'){
                cap++; 
                break;
            }
            i++;
        }
        
        i = rpos,j = cpos;
        while(j < 8 && board[i][j] != 'B')
        {
            if(board[i][j] == 'p'){
                cap++; 
                break;
            }
            j++;
        }
        i=rpos,j=cpos;
        while(j >= 0 && board[i][j] != 'B')
        {
            if(board[i][j] == 'p'){
                cap++; 
                break;
            }
            j--;
        }
        
        return cap;
    }
};