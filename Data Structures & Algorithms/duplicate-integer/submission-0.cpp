class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for (const auto element : nums) {
            if (temp.contains(element)) return true;

            temp.insert(element);
        }

        return false;
    }
};