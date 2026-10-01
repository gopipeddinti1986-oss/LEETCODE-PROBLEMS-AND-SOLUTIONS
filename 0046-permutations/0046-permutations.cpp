class Solution {
public:

    void solve(int n,vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, vector<bool>& took){
        if(temp.size() == n){
            res.push_back(temp);
            return;
        }

        for(int i=0; i<n; i++){
            if(took[i]){
                continue;
            }

            took[i] = 1;
            temp.push_back(nums[i]);

            solve(n, nums, res, temp, took);

            temp.pop_back();
            took[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        int n = nums.size();
        vector<bool> took(n, false);

        solve(n, nums, res, temp, took);

        return res;
    }
};