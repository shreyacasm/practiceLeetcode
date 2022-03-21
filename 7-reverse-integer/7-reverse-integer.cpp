class Solution {
public:
    int reverse(int x) {
        int l=x;
        long long n=0;
        while(l){
            if(n*10>INT_MAX || n*10<INT_MIN)
                return 0;
            n=n*10+l%10;
            l=l/10;
        }
        return n;
    }
};