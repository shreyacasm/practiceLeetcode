class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>::iterator it;
        int counter=0;
        for(it=nums.begin();it!=nums.end();++it){
            //cout<<"here it val is "<<*it<<"\n";
            if(*it==0){
                
                nums.erase(it);
                nums.insert(nums.begin(),0);
            }
            else if(*it==2){
                nums.erase(it);
                nums.push_back(2);
                --it;
            }
            counter++;
            if(counter==nums.size())
                break;
        }
        
    }
};