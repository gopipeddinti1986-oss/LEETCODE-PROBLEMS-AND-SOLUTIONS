class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int i = 0; i<nums.size(); i++){
            string str = to_string(nums[i]);

            for(int j = 0; j<str.size(); j++){
                int num = str[j] - '0';
                res.push_back(num);
            }
        }
        return res;
    }
};