class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string ans;
        while(i<=word1.size()-1 && i<=word2.size()-1){
            ans=ans+word1[i]+word2[i];
            i++;
        }
        cout<<"here i is "<<i<<"\n";
        if(i<word1.size()){
            ans=ans+word1.substr(i);
        }
        if(i<word2.size()){
            ans=ans+word2.substr(i);
            cout<<" value of substr part "<<word2.substr(i)<<"\n";
        }
        return ans;
    }
};