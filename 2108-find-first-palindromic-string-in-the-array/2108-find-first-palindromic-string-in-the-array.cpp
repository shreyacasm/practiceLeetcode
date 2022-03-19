class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++){
            string o=words[i];
            reverse(o.begin(),o.end());
            if(o==words[i]){
                return words[i];
            }
        }
        return "";
    }
};