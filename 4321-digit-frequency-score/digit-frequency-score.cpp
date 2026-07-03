class Solution {
public:
    int digitFrequencyScore(int n) {
        int output = 0;
        while(n !=0)
        {
            int temp = n%10;
            output += temp;
            n/=10;
        }
        return output;
    }
};