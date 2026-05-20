
class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto newVector = vector<int>();
        newVector.insert(newVector.end(), nums.begin(), nums.end());

        newVector.insert(newVector.end(), newVector.begin(), newVector.end());
        return newVector;
    };
};