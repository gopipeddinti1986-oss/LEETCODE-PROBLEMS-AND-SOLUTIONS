class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ans=0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]%(nums2[j]*k) == 0){
                    ans++;
                }
            class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int n = nums1.size();
        int m = nums2.size();

        int ans = 0;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(nums1[i] % (k * nums2[j]) == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};}
        }
        return ans;
    }
};