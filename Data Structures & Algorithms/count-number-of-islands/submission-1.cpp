class Solution {
public:
    void bfs(vector<vector<char>>& grid,int r,int c)
    {
        vector<pair<int,int>> direction = {
            {1,0},{0,1},{-1,0},{0,-1}
        };
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.emplace(r,c);
        while(!q.empty())
        {
           auto [nr , nc] = q.front();
           grid[nr][nc] = '0';
            q.pop();
            for(auto [d1,d2] :direction)
            {
                int newR = nr + d1;
                int newC = nc + d2;
                if(newR >= 0 && newC >=0 && newR < n && newC <m && grid[newR][newC] =='1' ){
                    q.emplace(newR,newC);
                    grid[newR][newC] = '0';
                }

            }
        }


    }
    /*
        BFS we will have a grid we pass by reference, we start it at a specific node and
        we branch out to all neigbors that are not visited. we do this by putting our start
        node in our queue, then we set r and c to the front of q we check all neighbors if
        if the neighbor is '1' then we add that node to the queue and continue on moving out
        setting each one to zero to mark that its been visited once there are no more ones
        the queue is empty that means we return. when we return we add one to islands and continue
        to check the matrix.


    */
    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int islands = 0;
        for(int i = 0;  i< row;i++)
            for(int j = 0; j <col;j++)
            {
                if(grid[i][j] =='1')
                {
                    bfs(grid,i,j);
                    islands++;
                }

            }
        return islands;
        
        
    }
};
