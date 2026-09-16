class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            nums[i] = sum(nums[i]);
        }

        return *min_element(nums.begin(), nums.end());
    }
};