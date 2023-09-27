class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         vector<vector<int>>ans(r);

        int n=mat.size();
        int m=mat[0].size();
        int k=0,l=0;

        if(r*c!=n*m)
        {
            return mat;
        }

        for(int i=0;i<n;i++)
        {
            for( int j=0;j<m;j++)
            {
                if( l<c)
                {
                        ans[k].push_back(mat[i][j]);
                        l++; 
                }
                else
                {
                    k++;
                    ans[k].push_back(mat[i][j]);
                    l=0;
                    l++;
                    
                }
            }
        }
        return ans;
    }
};