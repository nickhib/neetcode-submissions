class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        int orig = image[sr][sc];
        if(orig == color)
            return image;
        int m = image.size();
        int n = image[0].size();
        queue<pair<int,int>> q;
        q.emplace(sr,sc);
        image[sr][sc] = color;
        while(!q.empty())
        {
            auto [r,c] = q.front();
            q.pop();
            for(auto &d : dirs)
            {
                //for row and colomn
                int nr = r+d[0], nc =c +d[1];
                if(nr >= 0 && nc < n && nc >=0 && nr < m && image[nr][nc] ==orig)
                {
                    image[nr][nc] = color;
                    q.emplace(nr,nc);
                }

            }
        }


        return image;
    }
};