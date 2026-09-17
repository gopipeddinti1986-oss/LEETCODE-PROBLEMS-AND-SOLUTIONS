class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int res = 0;
        for(int it : nums){
            if(it < k){
                res++;
            }
        }
        return res;
    }
};