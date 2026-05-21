class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for (const auto element : nums) {
            temp.insert(element);
        }

        return temp.size() != nums.size();
    }
};