class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> store;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                store.push(matrix[i][j]);
                if(store.size()>k)
                    store.pop();
            }
        }
        return store.top();
    }
};