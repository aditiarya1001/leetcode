class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,int,greater<int>> temp;
        int idx=0;
        for(auto i:score){
            temp[i[k]]=idx;
            idx++;
        }
        vector<vector<int>> res;
        for(auto i: temp){
            res.push_back(score[i.second]);
        }
        return res;
    
    }
};