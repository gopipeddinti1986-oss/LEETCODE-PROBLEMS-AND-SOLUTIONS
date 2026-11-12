class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        const int n = nums.size();
        int mx = INT_MIN,inc = 1,dec = 1;
        for(int i = 1;i < n;i++){
            if(nums[i - 1] < nums[i]){
                ++inc;
            }
            else{
                mx = max(mx,inc);
                inc = 1;
            }
            if(nums[i - 1] > nums[i]){
                ++dec;
            }
            else{
                mx = max(mx,dec);
                dec = 1;
            }
        }
        mx = max(mx,inc);
        mx = max(mx,dec);
        return mx;
    }
};
