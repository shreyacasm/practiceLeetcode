class Solution {
public:
    
    string freqAlphabets(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            string t;
            if(i<s.size()-2 && s[i+2]=='#'){
                cout<<"following this condition with "<<s[i]<<" "<<s[i+1]<<"\n";
                if(s[i]=='1'){
                    t=s[i]+s[i+1]+9;    
                }
                else{
                    t=s[i]+s[i+1]+18;
                }
                i+=2;
            }
            else{
                t=s[i]+48;
            }
            ans+=t;
        }
        return ans;
    }
};