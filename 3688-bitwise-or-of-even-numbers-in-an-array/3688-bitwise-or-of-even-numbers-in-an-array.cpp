class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res = 0;

        for(int it : nums){
            if(it%2 == 0){
                res |= it;
            }
        }

        return res;
    }
};