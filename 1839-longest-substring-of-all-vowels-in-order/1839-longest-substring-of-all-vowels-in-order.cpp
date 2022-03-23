class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int max=0,count=1,ptr=0;
        for(int i=0;i<word.size()-1;i++){
            if(word[i+1]>=word[i]){
                if(word[i+1]>word[i]){
                    count++;
                }
                ptr++;
            }
            else{
                
                cout<<"breaking at i and p and count"<<i<<" "<<ptr<<" "<<count<<"\n";
                if(count==5){
                    if(max<ptr+1){
                        max=ptr+1;
                    }
                }
                ptr=0;
                count=1;
            }
            
        }
        if(count==5){
            if(max<ptr+1){
                max=ptr+1;
            }
        }
                
        return max;
    }
};