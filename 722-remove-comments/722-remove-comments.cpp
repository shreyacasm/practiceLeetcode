class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> res;
        int flag1=0,flag2=0,st=0;
        string tp;
        for(int i=0;i<source.size();i++){
            string line=source[i];
            if(line.size()==0){
                continue;
            }
            st=0;
            int j;
            for(j=0;j<line.size()-1;j++){
                if(line[j]=='/' && line[j+1]=='/' && flag2==0){
                    flag1=0;
                    break;
                }
                else if(line[j]=='/' && line[j+1]=='*' && flag1==0 && flag2==0){
                    flag2=1;
                    j++;
                    
                }
                else if(line[j]=='*' && line[j+1]=='/' && flag2==1){
                    flag2=0;
                    j++;
                }
                else if(flag1==0 && flag2==0){
                    tp+=line[j];
                }
            }
            if(j==line.size()-1 && flag2!=1)
                tp+=line[j];
            if(flag2!=1 && tp.size()){
                res.push_back(tp);
                tp="";
            }
        }
        return res;
    }
};