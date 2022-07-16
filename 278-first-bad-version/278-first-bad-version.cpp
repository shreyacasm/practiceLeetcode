// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1,right=n;
        int version;
        while(left<right){
            version=left + (right-left)/2;
            if(!isBadVersion(version))
                left=version+1;
            else{
                right=version;
            }
        
        }
        return left;
    }
};