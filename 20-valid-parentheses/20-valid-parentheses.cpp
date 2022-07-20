class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        int counter=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                open.push(s[i]);
                counter++;
            }
            else{
                if(open.empty() || (s[i]=='}' && open.top()!='{') || (s[i]==']' && open.top()!='[') || (s[i]==')' && open.top()!='('))
                    return false;
                else{
                    open.pop();
                    counter--;
                }
                    
            }
       }
        if(counter!=0)
            return false;
        return true;
    }
};