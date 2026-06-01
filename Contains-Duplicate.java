1class Solution {
2    public boolean containsDuplicate(int[] nums){   
3        HashSet <Integer> map = new HashSet<>();
4        for(int i:nums)
5        {
6            if(map.contains(i))
7                return true;
8            map.add(i);
9        }
10        return false;
11
12    }
13}