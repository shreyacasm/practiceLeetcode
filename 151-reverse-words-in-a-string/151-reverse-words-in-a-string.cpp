class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isspace(s[i])){
                if(temp.size()>=1){
                    st.push(temp);
                }
                temp="";
            }
            else{
                temp=temp+s[i];
            }
                
        }
        if(temp.size()>0){
            st.push(temp);    
        }
        s="";
        cout<<"here st.size() is     "<< st.size()<<"-----------\n";
        while(!(st.empty())){
            s=s+st.top();
            st.pop();
            if(st.empty())
                return s;
            else
                s=s+" ";
        }        
        return s;
    }
};