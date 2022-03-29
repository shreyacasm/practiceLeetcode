class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]-0<=90 && s[i]-0>=65){
                s[i]=s[i]-0+32;
                //cout<<"s[i] is "<<s[i]<<"\n";
                
            }
        }
        return s;
    }
};