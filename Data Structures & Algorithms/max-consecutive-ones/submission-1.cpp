class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // the array is binary so we should loop through the array, have a counter
        // if we found 0 then reset the counter.
        // also need a variable to store the highest consecutive number

        int max = 0;
        int counter = 0;
        int length = nums.size();

       // for (int i = 0; i < length; i++) {
       //     if (nums[i] == 0) {
       //        
       //         counter = 0;
       //         continue;
       //     }
       //
       //     counter++;
       //     max = std::max(max, counter);
       // }

       for (int num: nums) {
        counter = num ? counter +1 : 0;
        max = std::max(max, counter);
       }

        return max;
    }
};