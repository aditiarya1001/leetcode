class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        // map<int,int,greater<int>> temp;
        // int idx=0;
        // for(auto i:score){
        //     temp[i[k]]=idx;
        //     idx++;
        // }
        // vector<vector<int>> res;
        // for(auto i: temp){
        //     res.push_back(score[i.second]);
        // }
        // return res;
        
        
    map<int,vector<int>,greater<int>>mp;
    for(auto &i : score) mp[i[k]] = i;
        
    vector<vector<int>> res;
    for(auto i: mp)
    {
        res.push_back(i.second);
    }
    return res;
    // score.clear();
    // for(auto i = mp.rbegin(); i!=mp.rend(); i++) 
    //     score.push_back(i->second);
    // return score;
    }
};