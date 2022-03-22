class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        while(n){
            sum=sum+n%10;
            prod=prod*(n%10);
            n=n/10;
        }
        return prod-sum;
    }
};