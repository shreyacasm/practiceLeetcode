class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it;
        vector<int> res;
        for(auto ir=nums.begin(); ir != nums.end(); ++ir){
            
            it = std::find (ir+1, nums.end(), target-*ir);
            if (it != nums.end()){
                res.push_back(ir-nums.begin());
                res.push_back(it-nums.begin());
                
                return res;
            }
        }
    return nums;
    }
};