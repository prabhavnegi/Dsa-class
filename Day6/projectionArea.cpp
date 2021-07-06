class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int area = 0; 
        for (int i = 0; i < grid.size(); i++) {
            int frontArea = 0, sideArea = 0; 
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0) 
                    area++; 
                frontArea = max(frontArea, grid[j][i]); 
                sideArea = max(sideArea, grid[i][j]); 
            }
            area += sideArea + frontArea; 
        }
        return area; 
    }
};