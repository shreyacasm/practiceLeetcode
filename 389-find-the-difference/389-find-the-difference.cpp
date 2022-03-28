class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> dic;
        int i=0;
        for(i=0;i<s.size();i++){
            dic[s[i]]++;
            dic[t[i]]--;
        }
        dic[t[i]]--;
        map<char,int>::iterator it;
        for(it=dic.begin();it!=dic.end();++it){
            if(it->second==-1){
                return it->first;
            }
        }
        return 'o';
    }
};