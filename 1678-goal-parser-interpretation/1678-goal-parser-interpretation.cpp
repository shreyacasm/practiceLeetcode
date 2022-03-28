class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.size();){
            if(command[i]=='G'){
                ans=ans+'G';
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')'){
                ans=ans+'o';
                i+=2;
            }
            else{
                ans=ans+'a'+'l';
                i+=4;
            }
        }
        return ans;
    }
};