class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        //check leap
        int mon[12]={6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)){
            mon[0]=5;
            mon[1]=1;
        }
        int sum=0;
        
        int yr[4]={0, 5, 3, 1};
        string weak[7]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


        int last_dig=year%100;
        int yc=((year-last_dig)%400)/100;
        int d=day%7;
        int m=mon[month-1];
        int y= yr[yc] + last_dig%7 + last_dig/4; 
        
        
        int ans=(d+m+y)%7;
        return weak[ans];
    }
};