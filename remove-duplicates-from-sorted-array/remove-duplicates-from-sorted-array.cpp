class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int count = 1;
        for(int i=0;i<n-1;){
            if(nums[i]!=nums[i+1]){
                count++;
                i++;
            }
            else{
                nums.erase(nums.begin()+i);
                n=n-1;
            }
        }
        //cout<<count<<"\n";
        return count;
	    // nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
	    // return nums.size() ;
    }
};