class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;

        
        for(int i = 0; i<words.size(); i++){
            int total = 0;
            for(int j = 0; j<words[i].size(); j++){
                char c = words[i][j];
                total += weights[c - 'a'];
            }
            s += 'z' - (total%26);
        }
        return s;
    }
};