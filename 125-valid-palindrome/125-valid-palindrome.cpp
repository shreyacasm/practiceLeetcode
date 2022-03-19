class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        int j=s.size()-1;
        for(int i=0;i<=j;){
            //cout<<"testing for i and j "<<i<<" "<<j<<"\n";
            if((int(s[i])<48 || int(s[i])>57) && (int(s[i])<97 || int(s[i])>122)){
                i++;
                continue;
            }
            if((int(s[j])<48 || int(s[j])>57) && (int(s[j])<97 || int(s[j])>122)){
                j--;
                continue;
            }
            if(s[i]!=s[j]){
                //cout<<"here i and j are"<<i<<" "<<j<<"\n";
                return false;
            }
            i++;j--;
        }
        return true;
    }
};