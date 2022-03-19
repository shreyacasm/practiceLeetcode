class Solution {
public:
    int conRes(string word){
        int len=word.size();
        int res=0;
        int i=0;
        while(i<len){
            res=res*10+int(word[i])-97;
            i++;
        }
        return res;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return (conRes(firstWord)+conRes(secondWord)==conRes(targetWord));
    }
};