1class Solution {
2    public boolean isHappy(int n) {
3        while(n >= 5)
4        {
5            int sum = 0;
6            while(n>0)
7            {
8                int temp = n%10;
9                sum += temp*temp;
10                n/=10;
11            }
12            n = sum;
13        }
14        return (n==1) ? true : false;
15    }
16}