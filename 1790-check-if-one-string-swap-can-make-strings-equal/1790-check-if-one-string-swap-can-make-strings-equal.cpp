class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        char d1,d2;
        int flag=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i] && flag==0){
                d1=s1[i];
                d2=s2[i];
                flag=1;
            }
            else if(s1[i]!=s2[i] && flag==1){
                flag=2;
                if(s1[i]!=d2 || s2[i]!=d1){
                    cout<<"at  "<<s1<<"\n";
                    return false;
                }
            }
            else if(s1[i]!=s2[i] && flag==2){
                cout<<"here"<<"\n";
                return false;
            }
        }
        if(flag==1)
            return false;
        return true;
    }
};