class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        res.reserve(2 * n);

        res.insert(res.end(), nums.begin(), nums.end());
        res.insert(res.end(), nums.rbegin(), nums.rend());

        return res;
    }
};