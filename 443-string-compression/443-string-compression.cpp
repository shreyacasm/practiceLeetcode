class Solution {
public:
    int compress(vector<char>& chars) {
        int o=0,temp=1;
        for(int i=1;i<chars.size();i++){
            while(i<chars.size() && chars[i]==chars[i-1]){
                i++;
                temp++;
            }
            cout<<"here temp is"<<temp<<"\n";
            if(temp>1){
                string s=to_string(temp);
                temp=1;
                for(int i=0;i<s.size();i++){
                    chars[++o]=s[i];
                }    
            }
            
            if(i!=chars.size()){
                chars[++o]=chars[i];
            }
        }
        return o+1;
    }
};