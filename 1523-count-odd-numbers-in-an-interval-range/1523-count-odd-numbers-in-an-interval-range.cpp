class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==1){
            return 1+(high-low)/2;
        }
        else{
            if(high%2==1){
                return 1+(high-low)/2;
            }
            else{
                return (high-low)/2;
            }
        }
        return 0;
    }
};