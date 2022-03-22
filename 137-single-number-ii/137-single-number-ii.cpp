class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> store;
        
        for(int i=0;i<nums.size();i++){
            store[nums[i]]++;
        }
        for(auto it=store.begin();it!=store.end();it++){
            if(it->second==1){
                return it->first; 
            }
        }
        return 0;
    }
};