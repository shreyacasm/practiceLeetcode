class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dist=10000,cal=0,ans=-1;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                cal=abs(x-points[i][0])+abs(y-points[i][1]);
                //cout<<"here cal n dist is"<<cal<<" "<<dist<<"\n";
                if(cal<dist){
                    ans=i;
                    dist=cal;
                }
            }
            
        }
        return ans;
    }
};