class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        int num=n;
        while(num!=1){
            int sum=0;
            while(num){
                sum=sum+pow(num%10,2);
                num=num/10;
            }
            num=sum;
            if(mp[sum]==1)
                return false;
            mp[sum]++;
        }
        return true;
    }
};