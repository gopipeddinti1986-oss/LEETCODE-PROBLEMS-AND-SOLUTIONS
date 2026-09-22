class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for(int i = 0; i<n; i++){
            sum += mat[i][i];
        }

        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                sum += mat[n-1-i][j];
                break;
            }
        }
        if(n%2 != 0){
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
};