class Solution {
public:
    int toascii(const char ch)
    {
        return static_cast<int>(ch);
    }
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<s.size()-1;i++)
        {
            sum += abs(s[i] - s[i+1]);
        }
        return sum;
    }
};