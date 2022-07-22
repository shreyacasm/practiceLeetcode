class Solution {
public:
    string getHint(string secret, string guess) {
        map<int,int>comp;
        int A=0;
        int B=0;
        for(int i=0;i<secret.size();i++){
            cout<<" here we have"<<guess[i]<<" and "<<secret[i]<<"\n";
            if(secret[i]==guess[i]){
                secret[i]='-';
                guess[i]='-';
                A++;
            }
            else{
               for(int j=0;j<guess.size();j++){
                   if(secret[j]!=guess[j] &&secret[i]==guess[j] && guess[j]!='-'){
                       B++;
                       guess[j]='-';
                       break;
                   }
                       
               }
            }
            cout<<"value of A & B is "<<A<<"  "<<B<<"\n";
        }
        return to_string(A)+'A'+to_string(B)+'B';
    }
};