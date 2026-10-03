class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res; 

        for (const auto &q: queries)
        {
            int count = 0; 
            int radiusSq = q[2]*q[2]; 

            for(const auto&p: points)
            {
                int distance = (p[0]-q[0])*(p[0]-q[0]) + (p[1]-q[1]) * (p[1]-q[1]); 
                count+= (distance <= radiusSq)?1: 0; 
            }
            res.push_back(count); 

        }
        return res; 
    }
};