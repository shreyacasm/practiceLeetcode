class Solution {
public:
   static bool cmp(pair<int, double>& a, pair<int, double>& b)
    {
        return a.second < b.second;
    }

    // Function to sort the map according
    // to value in a (key-value) pairs
    void sort(map<int, double>& M)
    {

        // Declare vector of pairs
        
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        double x1=0,y1=0;
        map<int,double> mp;
        
        for(int i=0;i<points.size();i++){
            double x2=points[i][0];
            double y2=points[i][1];
            double dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
            mp.insert({ i, dist });
        }
        
        
        vector<vector<int>> ans(k, vector<int> (2, 0));
        vector<pair<int, double> > A;

        // Copy key-value pair from Map
        // to vector of pairs
        for (auto& it : mp) {
            A.push_back(it);
        }

        // Sort using comparator function
        ::sort(A.begin(), A.end(), cmp);

        // Print the sorted value
        int ptr=0;
        for (auto& it : A) {

            cout << it.first << ' '
                 << it.second << endl;
            int ele=it.first;
            ans[ptr][0]=points[ele][0];
            ans[ptr][1]=points[ele][1];
            
            ptr++;
            if(ptr>=k){
                break;
            }
        }
        

        return ans;
    }
};