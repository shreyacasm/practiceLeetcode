class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> iso;
        vector<char> dic;
        for(int i=0;i<s.size();i++){
            if(iso.find(s[i])!=iso.end()){
                if(iso[s[i]]!=t[i])
                    return false;
            }
            else{
                vector<char>::iterator it;
                it=find(dic.begin(), dic.end(),t[i]);
                if(it!=dic.end()){
                    return false;    
                }
                iso[s[i]]=t[i];
                dic.push_back(t[i]);
                
            }
        }
        return true;
    }
};