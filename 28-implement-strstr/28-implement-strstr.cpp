class Solution {
public:
    
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                if(needle==haystack.substr(i,needle.size())){
                    return i;
                }
            }
        }
        return -1;
    }
};