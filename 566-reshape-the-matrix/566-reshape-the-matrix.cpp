class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int R=mat.size();
        int C=mat[0].size();
        if(r*c!=R*C or (r==R && c==C)){
            return mat;
        }
        vector<int> ele;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                ele.push_back(mat[i][j]);
            }
        }
        int o=0;
        vector<vector<int>> ans(r, vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=ele[o++];
            }
        }
        return ans;
    }
};