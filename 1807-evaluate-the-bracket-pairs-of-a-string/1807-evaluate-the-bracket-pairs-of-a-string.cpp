class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        /*map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string req="";
                i++;
                while(s[i]!=')'){
                    req=req+s[i];
                    i++;
                }
                if(mp.find(req)!=mp.end()){
                    ans=ans+mp[req];
                }
                else{
                    ans=ans+'?';
                }
                //cout<<"here ans is "<<ans<<"\n";
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;*/
        string ans;
        map<string,string> m;
        for(int i=0;i<k.size();i++)
        {
            m[k[i][0]]=k[i][1];
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                string tp;
                i++;
                while(s[i]!=')')
                {
                    tp+=s[i];
                    i++;
                }
                int f=0;
                if(m.find(tp)!=m.end())
                {
                    ans+=m[tp];
                }
                else
                    ans+='?';
            }
            else
            {
                ans+=s[i];
            }
            
        }
        return ans;
    }
};