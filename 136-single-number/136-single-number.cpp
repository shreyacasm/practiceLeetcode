class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> store;
        for(auto it=nums.begin(); it!=nums.end(); ++it){
            store[*it]++;
        }
        for(auto it=store.begin();it!=store.end();++it){
            if(it->second==1){
                return it->first;
            }
        }
        return 0;
    }
};