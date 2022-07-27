class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> store;
        
        for(auto it:nums){
            if(store.find(it)==store.end())
                store[it]=1;
            else
                store[it]++;
            if(store[it]>nums.size()/2)
                return it;
        }
        return 0;
        
    }
};