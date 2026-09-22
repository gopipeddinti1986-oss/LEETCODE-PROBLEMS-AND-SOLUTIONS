class Solution {
public:
    int earliestTime(vector<vector<int>>& mat) {
        int rows = mat.size();        
        int cols = mat[0].size();   

        int min_val = INT_MAX;;
        for(int i = 0; i<rows; i++){
            int sum = 0;
            for(int j = 0; j<cols; j++){
                sum += mat[i][j];
            }
            min_val = min(min_val,sum);
        }

        return min_val;
    }
};