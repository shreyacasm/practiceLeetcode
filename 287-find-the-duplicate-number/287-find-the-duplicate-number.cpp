class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> store;
        for(auto i=nums.begin();i!=nums.end();++i){
            if(store.find(*i)!=store.end())
                return *i;
            store.insert(*i);
        }
    return 0;    
    }
};