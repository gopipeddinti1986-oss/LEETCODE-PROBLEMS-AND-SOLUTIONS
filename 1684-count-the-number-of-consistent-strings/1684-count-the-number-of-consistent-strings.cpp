class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;

        for(string &w : words) {
            bool consistent = true;
            for(char c : w) {
                if(allowed.find(c) == string::npos) {
                    consistent = false;
                    break;
                }
            }
            if(consistent) res++;
        }

        return res;
    }
};
