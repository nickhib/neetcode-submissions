class Solution {
public:
    int bfs(vector<vector<int>>& grid, int r ,int c)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
        q.emplace(r,c);
        int islandCount = 0;
        while(!q.empty())
        {
            auto [r,c] = q.front();
            q.pop();
            grid[r][c] = 0;
            islandCount++;
            for(auto [nr,nc] : dir)
            {
                int newR = nr +r;
                int newC = nc+c;
                if(newR >= 0&& newR < n && newC >=0 && newC < m && grid[newR][newC]==1)
                {
                    q.emplace(newR,newC);
                    grid[newR][newC] = 0;
                }
            }
        } 
        return islandCount;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int islandMass = 0;


        for(int r = 0; r < grid.size();r++)
        {
            for(int c = 0;c<grid[r].size();c++ )
            {
                if(grid[r][c]==1)
                {
                    islandMass = max(islandMass,bfs(grid,r,c));
                }
            }
        }

        return islandMass;


        
    }
};
