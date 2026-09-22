class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int left = 0, right = 0;

        for (int i : nums1) {
            for (int j : nums2) {
                if (i == j) {
                    left++;
                    break;
                }
            }
        }

        for (int i : nums2) {
            for (int j : nums1) {
                if (i == j) {
                    right++;
                    break;
                }
            }
        }

        return {left, right};
    }
};