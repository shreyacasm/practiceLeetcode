class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag=0,count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(isspace(s[i])){
                if(count!=0){
                    return count;
                }
            }
            else{
                count++;
            }
        }
        return count;
    }
};