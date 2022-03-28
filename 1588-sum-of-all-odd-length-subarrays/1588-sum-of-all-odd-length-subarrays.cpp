class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0,n=arr.size();
        
        for(int i=0;i<n;i++){
            sum=sum+(arr[i])*(ceil((i+1)*(n-i)/2.0));
        }
        
        return sum;
    }
};