class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int o=0;
        if(n==0){
            return;
        }
        for(auto i=nums1.begin();i!=nums1.end();i++){
            
            cout<<"\n";
            if(o==nums2.size())
                return;
            if(nums2[o]<*i){
                nums1.erase(nums1.begin()+nums1.size()-1);
                nums1.insert(i,nums2[o]);
                o++;
                
                
            }
        }
        //cout<<"worked out"<<"\n";
        vector<int>::iterator it;
        it=nums1.begin()+m+o;
        while(o<nums2.size()){
            nums1.erase(it);
            nums1.insert(it,nums2[o]);
            o++;
            it++;
        }
            
    }
};