class Solution {
public:
    string digitSum(string s, int k) {
        int sum = 0;
        int count = 0;
        string ans = "";

        while(s.size() > k){
            for(int i = 0; i < s.size(); i++){
                if(count == k){
                    count = 0;
                    ans = ans + to_string(sum);
                    sum = 0;
                }
                sum = sum + (s[i] - '0');
                count++;

                if(i + 1 == s.size()){
                    ans = ans + to_string(sum);
                    count = 0;
                    sum = 0;
                }
                
            }
            s = ans;
            ans = "";
        }
        return s;

    }
};