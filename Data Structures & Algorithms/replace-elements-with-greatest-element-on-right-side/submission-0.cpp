class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // Naive approach:
        // 1. Loop1 the array
        // 2. loop2 the right element to end to find the max value
        // 3. last iteration of loop1 change the value to -1

        for (int i = 0; i < arr.size(); i ++) {
            
            if (i == arr.size() - 1 ) {
                arr[i] = -1;
                continue;
            }
            
            // save the max value of the right side of current index
            int maxRight = 0;
            for (int j = i+1; j < arr.size(); j++) {
                maxRight = max(maxRight, arr[j]);
            }
            
                arr[i] = maxRight;
            

        } 


        return arr;
    }
};