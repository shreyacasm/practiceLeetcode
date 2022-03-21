class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double avg=accumulate(salary.begin(),salary.end(),0);
        avg=avg-salary[0]-salary[salary.size()-1];
        avg=avg/(salary.size()-2);
        
        return avg;
    }
};