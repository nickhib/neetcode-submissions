class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int k = 0;k <board.size();k++)
        {
            unordered_map<char,int> umap;
             unordered_map<char,int> umap2;
            for(int m = 0; m < board[k].size();m++)
            {
                if(board[k][m]!= '.')
                {
                    if(!umap.count(board[k][m]))
                    {
                        umap[board[k][m]];
                    }
                    else
                    {
                        return false;
                    }
                }
                if(board[m][k]!= '.')
                {
                    if(!umap2.count(board[m][k]))
                    {
                        umap2[board[m][k]];
                    }
                    else
                    {
                        return false;
                    }
                }

            }
        }
        for(int k = 0;k <board.size();k+=3)
        {
            for(int m = 0; m < board[k].size();m+=3)
            {
                unordered_map<char,int> umap;
                for(int i =k; i <(k+3);i++)
                {
                    for(int j = m; j < (m+3);j++)
                    {
                        if(board[i][j]!= '.'){
                            if(!umap.count(board[i][j])){
                                umap[board[i][j]];
                            }
                            else
                            {
                                return false;
                            }
                        }

                    }
                }
            }
        }
        return true;
        
    }
};
