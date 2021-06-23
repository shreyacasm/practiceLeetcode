class Solution {
public:
    int minPartitions(string n) {
        int len = n.length();
        int max = 0;
        for(int i=0;i<len;i++){
            int val = int(n[i]);
            if(val - '0'==9){
                max=9;
                return max;
            }
            if(val>max)
                max=val;
        }
        cout<<"the count is"<<max<<"\n";
        return max - '0';
    }
};