class Solution {
public:
    int arraySign(vector<int>& nums) {
        vector<int>::iterator it;
        int p=1;
        for(it=nums.begin();it!=nums.end();it++){
            if(*it<0){
                p=p*(-1); 
            }
            else if(*it==0){
                return 0;
            }
        }
        return p;
    }
};