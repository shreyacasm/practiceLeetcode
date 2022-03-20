class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int len=nums.size();
        // vector<int>::iterator it;
        // for(auto it=nums.begin();it!=nums.end() && len--;){
        //     if(*it==0){
        //         nums.erase(it);
        //         nums.push_back(0);
        //     }
        //     else if(it!=nums.end()){
        //         ++it;
        //     }
        // }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
            
        }
        j=nums.size()-j;
        while(j){
            nums[nums.size()-j]=0;
            j--;
        }
    }
};