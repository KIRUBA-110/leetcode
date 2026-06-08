1class Solution(object):
2    def isPalindrome(self, s):
3        s2 = re.sub(r'[^a-zA-Z0-9]','', s).lower()
4        return s2 == s2[::-1]