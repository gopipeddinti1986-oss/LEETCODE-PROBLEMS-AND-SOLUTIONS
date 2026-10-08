class Solution {
public:

    void temp(string& temp1){
        if(temp1.size() >= 2){
            temp1.pop_back();
            temp1.erase(0, 1);
        }
    }

    string removeOuterParentheses(string s) {
        string res = "";

        int open_cnt = 0;
        int close_cnt = 0;
        int j = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                open_cnt++;
            }
            else{
                close_cnt++;
            }

            if(open_cnt == close_cnt){
                string temp1 = s.substr(j,i-j+1);
                j = i+1;
                open_cnt = 0;
                close_cnt = 0;
                temp(temp1);
                res += temp1; 
            }           
            
        }

        return res;
    }
};