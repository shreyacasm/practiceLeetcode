class Solution {
public:
    int isVowel(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            return 1;
        }
        return 0;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            count+=isVowel(s[i]);
            if(count==k){
                return k;
            }
        }
        int max=count;
        for(int i=k;i<s.size();i++){
            count=count+isVowel(s[i])-isVowel(s[i-k]);
            if(count>max)
                max=count;
            if(max==k){
                return k;
            }
        }
        return max;
    }
};