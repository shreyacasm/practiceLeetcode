class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=nums[0];
        for(int it=1;it!=nums.size();it++){
            x=x^nums[it];
        }
        return x;
    }
};