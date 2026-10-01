class Solution {
public:

    void solve(int idx, int n, int k, vector<int>&nums, vector<vector<int>>&res, vector<int>&temp){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }

        for(int i = idx; i<n; i++){
            temp.push_back(nums[i]);
            solve(i+1, n, k, nums, res, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            v[i] = i+1;
        }

        vector<vector<int>> res;
        vector<int> temp;
        solve(0, n, k, v, res, temp);
        return res;
    }
};