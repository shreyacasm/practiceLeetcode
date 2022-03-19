class Solution {
public:
    bool validPalindrome(string s) {
        int j=s.size()-1,i=0;
        int check1=0,check2=0;
        
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                int start=i+1,end=j;
                while(start<=end){
                    if(s[start]==s[end]){
                        start++;
                        end--;
                    }
                    else{
                        check1=1;
                        break;
                    }
                }
                start=i,end=j-1;
                while(start<=end){
                    if(s[start]==s[end]){
                        start++;
                        end--;
                    }
                    else{
                        check2=1;
                        break;
                    }
                }
                break;
            }
        }
        if(check1==1 && check2==1){
            return false;
        }
        return true;
    }
};