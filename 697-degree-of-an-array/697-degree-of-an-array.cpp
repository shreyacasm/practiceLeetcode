class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int> freq;
        int maxptr=0;
        for(int i=0;i<nums.size();i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
            }
            else{
                freq[nums[i]]++;
            }
            maxptr=max(maxptr,freq[nums[i]]);
        }
        int mini=INT_MAX;
        for(auto it:freq){
            if(maxptr==it.second){
                int fo,lo;
                int fin=it.first;
                vector<int>::iterator it;
                it=find(nums.begin(),nums.end(),fin);
                fo=it-nums.begin()+1;
                reverse(nums.begin(),nums.end());
                it=find(nums.begin(),nums.end(),fin);
                lo=nums.size()-(it-nums.begin());
                cout<<" first occurance is "<<fo<<" and last occurance is "<<lo<<"\n";
                
                reverse(nums.begin(),nums.end());
                mini=min(mini, lo-fo+1); 

            } 
        }
        return mini;
        
    }
};