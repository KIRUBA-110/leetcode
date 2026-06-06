1class Solution:
2    def isAnagram(self, s: str, t: str) -> bool:
3        return sorted(s) == sorted(t)