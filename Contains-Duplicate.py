1class Solution:
2    def containsDuplicate(self, nums: List[int]) -> bool:
3        return sorted(list(set(nums))) != sorted(list((nums)))
4