class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int area = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] != 0)
                {
                    int tempArea = (6 * (grid[i][j])) - (grid[i][j] - 1) * 2;
                    if(j>0)
                        int x = min(grid[i][j - 1], grid[i][j]);
                    if(i>0)
                        int y = min(grid[i - 1][j], grid[i][j]);
                    tempArea -= (x+y) * 2;
                    area += tempArea;
                }
            }
        }
        return area;
    }
};