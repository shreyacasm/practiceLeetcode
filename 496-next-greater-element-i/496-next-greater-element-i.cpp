class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> next;
        int ptr=1;
        int last=nums2[nums2.size()-1];
        next[last]=-1;
        for(int i=0;i<nums2.size()-1;){
            if(ptr==nums2.size()){
                next[nums2[i]]=-1;
                i++;
                ptr=i+1;
            }
            else if(nums2[ptr]>nums2[i]){
                next[nums2[i]]=nums2[ptr];
                i++;
                ptr=i+1;
                
            }
            else{
                ptr++;
            }
        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(next[nums1[i]]);
        }
        return res;
    }
};