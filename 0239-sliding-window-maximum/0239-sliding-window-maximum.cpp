class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> res;


        for(int i = 0; i<n; i++){
            if(i%k == 0){
                prefix[i] = nums[i];
            }
            else{
                prefix[i] = max(prefix[i-1], nums[i]);
            }
        }
        suffix[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            if(i%k == k-1){
                suffix[i] = nums[i];
            }
            else{
                suffix[i] = max(suffix[i+1], nums[i]);
            }
        }

    
        for(int i = k-1; i<n; i++){
            res.push_back(max(prefix[i], suffix[i-k+1]));
        }

        return res;
    }
};