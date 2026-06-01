1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3        HashMap <Integer,Integer> map = new HashMap<>();
4        for(int i=0;i<nums.length;i++)
5        {
6            int complement = target - nums[i];
7            if(map.containsKey(complement))
8            {
9                return new int[] {map.get(complement),i};
10            }
11            else
12            {
13                map.put(nums[i],i);
14            }
15        }
16        return new int[] {};
17    }
18}