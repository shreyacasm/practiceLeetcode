// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if (nums.size() & 1)
        return false;

    // Create a frequency array to count occurrences
    // of all remainders when divided by k.
    unordered_map<int, int> freq;

    // Count occurrences of all remainders
    for (int i = 0; i < nums.size(); i++)
        freq[((nums[i] % k) + k) % k]++;

    // Traverse input array and use freq[] to decide
    // if given array can be divided in pairs
    for (int i = 0; i < nums.size(); i++) {
        // Remainder of current element
        int rem = ((nums[i] % k) + k) % k;

        if(freq[rem]!=freq[k-rem]){
            if(rem==0 && freq[0]%2==1){
                return false;
            }
            else if(k-rem+rem!=0 && rem!=0){
                return false;
            }
        }
    }
    return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends