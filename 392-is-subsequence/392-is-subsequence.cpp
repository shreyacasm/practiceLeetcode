class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr=0;
        if(s.length()==0)
            return true;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[ptr])
                ptr++;
        }
        if(s.length()!=0 && ptr!=s.length())
            return false;
        return true;
    }
};