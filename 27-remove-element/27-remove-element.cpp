class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        int count=0;
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();){
            if(*it==val){
                count++;
                nums.erase(it);
            }
            else if(it!=nums.end()){
                ++it;
            }
            else{
                return nums.size();
            }
        }
        return nums.size();
    }
};