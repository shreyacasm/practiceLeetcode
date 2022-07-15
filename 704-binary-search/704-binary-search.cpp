class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid;
            if((left+right)%2){
                mid=(left+right)/2;
            }
            else{
                mid=(left+right)/2;
            }
            cout<<" left is "<<left<<" , right is "<<right<<" & mid is "<<mid<<"\n";
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return -1;
    }
};