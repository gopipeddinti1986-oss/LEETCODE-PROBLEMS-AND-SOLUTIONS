class Solution {
public:
    int digit_sum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {

        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }

        int digits_sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > 9){
                digits_sum += digit_sum(nums[i]);
            }
            else{
                digits_sum += nums[i];
            }
        }
        return abs(sum - digits_sum);
    }
};