class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        newList = len(nums) * 2
        newList = nums + nums
        return newList
        