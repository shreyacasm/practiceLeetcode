class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            auto it=s.find(nums[i]);
            if(it==s.end()){
                s.insert(nums[i]);
            }
            else
                return nums[i];
        }
        return 0;
    }
};