class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=1;i<strs.size();i++){
            string c=strs[i];
            int o=0;
            while(o<res.size() && o<c.size() && (c[o]==res[o] )){
                o++;
                
            }
            res=res.substr(0,o);
        }
        return res;
    }
};