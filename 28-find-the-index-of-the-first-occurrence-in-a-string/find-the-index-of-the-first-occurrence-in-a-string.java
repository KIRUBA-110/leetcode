class Solution {
    public int strStr(String haystack, String needle) {
        int needle_length = needle.length();
        int haystack_length = haystack.length();

        for(int i=0;i<=haystack_length - needle_length;i++)
        {
            int j = 0;
            while(j < needle_length && haystack.charAt(i+j) == needle.charAt(j))
            {
                j++;
            }
            
            if(j == needle.length())
            {
                return i;
            }
        }
        return -1;
    }
}