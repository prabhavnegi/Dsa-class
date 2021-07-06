class Solution {
public:
    int luckyNumber(vector<vector<int>> mat) {
        int k;
        vector<int> v;
        for(int i=0; i<mat.size(); i++){
            int min = INT_MAX, max = INT_MIN;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] < min){
                    min = mat[i][j];
                    k = j;
                }
            }
            for(int j = 0; j < mat.size(); j++)
            {
                if(mat[j][k] > max)
                    max=mat[j][k];
            }
            if(max == min)
                return max;
        }
        return -1;
    }
};