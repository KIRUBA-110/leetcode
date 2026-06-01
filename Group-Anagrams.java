1class Solution {
2    public List<List<String>> groupAnagrams(String[] strs) {
3        HashMap <String, List<String>> map = new HashMap <> ();
4        for (String s:strs)
5        {
6            char[] chars = s.toCharArray();
7            Arrays.sort(chars);
8            String key = new String(chars);
9            if(!map.containsKey(key))
10            {
11                map.put(key,new ArrayList<>());
12            }
13            map.get(key).add(s);
14        }
15        return new ArrayList<>(map.values());
16    }
17}