class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1 = s1.size();
        int n2 = s2.size();

        if(n1 > n2){
            return false;
        }

        vector<int> f1(26, 0);
        vector<int> f2(26, 0);

        for(int i = 0; i < n1; i++) {
            f1[s1[i] - 'a']++;
            f2[s2[i] - 'a']++;
        }

        if(f1 == f2){
            return true;
        }

        for(int i = n1; i < n2; i++) {

            f2[s2[i] - 'a']++;
            f2[s2[i - n1] - 'a']--;
            if(f1 == f2){
                return true;
            }
        }

        return false;
    }
};