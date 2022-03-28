class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int l=coordinates.size();
        double x1=coordinates[0][0],y1=coordinates[0][1];
        double x3=coordinates[l-1][0],y3=coordinates[l-1][1];
        
        for(int i=1;i<l-1;i++){
            double x2=coordinates[i][0];
            double y2=coordinates[i][1];
            if(((x1-x2)*(y2-y3)-(x2-x3)*(y1-y2))/2){
                return false;
            }    
        }
        return true;
    }
};