class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long r=0,o=x;
        while(x){
            r=r*10+x%10;
            x=x/10;
        }
        if(r==o){
            return true;
        }
        else{
            return false;
        }
    }
};