class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> lsum;
        vector<int> rsum;
        int ls=0,rs=0;
        for(int i=0;i<nums.size();i++){
            lsum.push_back(nums[i]+ls);
            ls=ls+nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            rsum.push_back(nums[i]+rs);
            rs=rs+nums[i];
        }
        reverse(rsum.begin(),rsum.end());
        for(int i=0;i<nums.size();i++){
            if(lsum[i]==rsum[i])
                return i;
        }
        return -1;
    }
};