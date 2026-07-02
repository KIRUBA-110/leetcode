class Solution {
    public String longestCommonPrefix(String[] nums) {
        Arrays.sort(nums);
        String first = nums[0];
        String last = nums[nums.length - 1];

        int i = 0;
        int minlength  = Math.min(first.length(),last.length());

        while(i<first.length() && first.charAt(i) == last.charAt(i))
        {
            i++;
        }
        return first.substring(0,i);
    }
}