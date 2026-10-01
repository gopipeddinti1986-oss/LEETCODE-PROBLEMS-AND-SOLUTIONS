class Solution {
public:

    void solve(int n, int o_b, int c_b, vector<string>&res, string&temp){
        if(temp.size() == n*2){
            res.push_back(temp);
            return;
        }

        if(o_b < n){
            temp.push_back('(');
            solve(n, o_b+1, c_b, res, temp);
            temp.pop_back();
        }

        if(o_b > c_b){
            temp.push_back(')');
            solve(n, o_b, c_b+1, res, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;

        solve(n, 0, 0, res, temp);
        return res;
    }
};