class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> letters;
    vector<string> combs;
    if (digits.size()==0) return combs;
    letters.push_back("");          // 0
    letters.push_back("");          // 1
    letters.push_back("abc ");       // 2
    letters.push_back("def ");       // 3
    letters.push_back("ghi ");       // 4
    letters.push_back("jkl ");       // 5
    letters.push_back("mno ");       // 6
    letters.push_back("pqrs");      // 7 
    letters.push_back("tuv ");       // 8 
    letters.push_back("wxyz");      // 9
    
    
    int k = digits.length();
    int* ix=new int[k];
    for(int i =0;i<k;i++) ix[i]=0;
    bool stop=false;
    while(!stop){
        string s="";
        bool add=true;
        for(int j =0;j<k;j++) {
            int d = digits[j]-48;
            int dIndex = ix[j];
            if( letters[d][dIndex]!=' ')
               s+=letters[d][dIndex];
            else {
                add=false;
                break;
            }
        }
        if(add) combs.push_back(s);
        for(int j=k-1;j>=0;j--){
            if (ix[j]==3){
                if (j==0) stop = true;
                ix[j]=0;
            }
            else{
               ix[j]++;
                break;
            } 
        }
    }
    return combs;
    }
};