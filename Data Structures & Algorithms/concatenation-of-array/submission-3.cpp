
class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;  // copies the vector
        ans.insert(
            ans.end(), nums.begin(),
            nums.end());  // (position, start of thing being copied, end of thing being copied)
        return ans;
    };
};