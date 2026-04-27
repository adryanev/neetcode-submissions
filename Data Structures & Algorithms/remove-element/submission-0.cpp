class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        // we need to remove elements that contains val
        // for that we need to:
        // 1. Loop through the vector
        // 2. if we found the element that equals to val then we remove it
        // 3. shift the index to the left to read again from the current value
        // 4. return the size of the vector

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            } 
        }

        return nums.size();
    }
};