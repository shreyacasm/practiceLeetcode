class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int ptr=0,op=0;
        unordered_map<char,string> comp;
        vector<string> dic;
        string temp;
        for(int i=1;i<=s.length();i++){
            if(i==s.length() || isspace(s[i])){
                temp=s.substr(ptr,i-ptr);
                ptr=i+1;
                
                //hashing
                if(comp.find(pattern[op])!=comp.end()){
                    if(comp[pattern[op]]!=temp)
                        return false;
                }
                else{
                    if(find(dic.begin(),dic.end(),temp)!=dic.end())
                        return false;
                    comp[pattern[op]]=temp;
                }
                op++;
                dic.push_back(temp);
                if(op>pattern.length())
                    return false;
            }
        }
        if(op!=pattern.length())
            return false;
        return true;
    }
};