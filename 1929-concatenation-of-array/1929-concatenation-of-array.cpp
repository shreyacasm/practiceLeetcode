class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int limit=nums.size();
        for(int i=0;i<limit;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};