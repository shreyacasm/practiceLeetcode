class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> store;
        for(int i=0;i<s.length();i++){
            if(store.find(s[i])==store.end()){
                store[s[i]]=1;
            }
            else
                store[s[i]]++;
        }
        cout<<" map of size "<<store.size()<<"\n";
        int fodd=0,sum=0;
        unordered_map<char,int>::iterator it;
        for(it=store.begin();it!=store.end();++it){
            cout<<" here it-> first & second is "<<it->first<<"   "<<it->second<<"\n";
            if((it->second)%2!=0){
                    if(fodd==0){
                        fodd=1;
                        sum+=it->second;    
                    }
                    else{
                        sum+=it->second-1;
                    }
            }
            else{
                sum+=(it->second);
            }
            cout<<" after ops the sum is :: "<<sum<<"\n";       
        }
        return sum;
    }
};