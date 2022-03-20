class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        vector<int>::iterator it;
        for(auto it=nums.begin();it!=nums.end() && len--;){
            if(*it==0){
                nums.erase(it);
                nums.push_back(0);
            }
            else if(it!=nums.end()){
                ++it;
            }
        }
    }
};