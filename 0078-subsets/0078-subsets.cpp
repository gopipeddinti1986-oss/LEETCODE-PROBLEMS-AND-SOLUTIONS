class Solution {
public:
    void gen(vector<int>& nums, int idx, int n, vector<vector<int>>& res, vector<int>& temp){
        if(idx >= n){
            res.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        gen(nums, idx+1, n, res, temp);
        temp.pop_back();
        
        gen(nums, idx+1, n, res, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        vector<vector<int>> res;
        vector<int> temp;

        gen(nums, idx, n, res, temp);

        return res;
    }
};