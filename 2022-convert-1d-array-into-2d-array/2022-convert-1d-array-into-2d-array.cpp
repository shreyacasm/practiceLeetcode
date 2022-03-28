class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()){
            vector<vector<int>> ans;
            return ans;
        }
        vector<vector<int>> ans(m,vector<int>(n,0));
        int o=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[o++];
            }
        }
        return ans;
        
    }
};