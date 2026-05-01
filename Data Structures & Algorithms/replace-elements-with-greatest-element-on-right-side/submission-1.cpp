class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // Suffix max:
        // 1. Start from right most, set to -1
        // 2. Loop to left, and compare the max value

        int size = arr.size();
        vector<int> ans(size);

        int rightMax = -1;

        for (int i = size -1; i>=0; i--) {
            
            ans[i] = rightMax;
            rightMax = max(rightMax, arr[i]);
        } 


        return ans;
    }
};