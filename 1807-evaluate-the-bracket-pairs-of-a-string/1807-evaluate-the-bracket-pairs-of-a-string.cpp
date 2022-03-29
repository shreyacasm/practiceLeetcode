class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string ans;
         for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(mp.find(s.substr(i+1,(s.find(')',i))-i-1))!=mp.end()){
                    ans+=mp[s.substr(i+1,(s.find(')',i))-i-1)];
                }
                else{
                    ans+='?';
                }
                i=s.find(')',i);
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};