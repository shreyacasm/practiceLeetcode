class Solution {
public:
    bool isPalindrome(int x) {
        
        long long r=0,o=x;
        while(x){
            r=r*10+x%10;
            x=x/10;
        }
        return (r==o && o>=0);
    }
};