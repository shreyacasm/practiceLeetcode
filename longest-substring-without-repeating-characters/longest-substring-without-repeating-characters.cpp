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
                string str = s.substr(i,j-i);
                int found = str.find(s[j]);
                //cout<<"here str is : "<<str<<" and we are finding "<<s[j]<<"\n";
                if(found!=string::npos){
                   int temp = j-i;
                    if(temp>max)
                        max = temp;
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