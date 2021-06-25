class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 1;
        if(s.length()<=1){
            return s.length();
        }
        for(int i=0;i<s.length();i++){
            int count=1;
            for(int j=i+1;j<s.length();j++){
                //cout<<"here str is : "<<str<<" and we are finding "<<s[j]<<"\n";
                if(((s.substr(i,j-i)).find(s[j]))!=string::npos){
                    if((j-i)>max)
                        max = j-i;
                    //cout<<"breaking after "<<str<<"where i is"<<i<<"\n";
                    break;
                }
                ++count;
                if(count>max)
                    max = count;
                
            
            }
        }
        return max;
    }
};