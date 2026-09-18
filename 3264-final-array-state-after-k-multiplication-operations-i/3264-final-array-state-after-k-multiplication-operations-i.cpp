class Solution {
public:
    int idx(vector<int>& nums, int n){
        int id = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == n){
                id = i;
                break;
            }
        }
        return id;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j = 0; j<k; j++){
            int min = *min_element(nums.begin(), nums.end());
            int id = idx(nums, min);
            nums[id] = min*multiplier;
        }
        return nums;
    }
};