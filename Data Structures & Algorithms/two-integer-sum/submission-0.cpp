class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> result;  
        for (int index = 0; index < nums.size(); ++index) {
            int value = nums[index];
            int complement = target - value;

            // Check if the complement exists in our map
            auto it = result.find(complement);
            if (it != result.end() && it->second != index) {
                return {it->second, index};
            }

            // Store the current value and its index
            result[value] = index;
        }

        return {};  // Return an empty vector if no solution is found
    }
};
