class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int res = 0;
        int left = 0;
        int right = nums.size()-1;

        sort(nums.begin(),nums.end());
        while(left < right){
            int sum = nums[left]+nums[right];

            if(sum < target){
                res += right-left;
                left++;
            }
            else{
                right--;
            }
        }
        return res;
    }
};