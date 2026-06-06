1class Solution:
2    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
3        ans = defaultdict(list)
4        for word in strs:
5            key = "".join(sorted(word))
6            ans[key].append(word)
7        return list(ans.values())
8