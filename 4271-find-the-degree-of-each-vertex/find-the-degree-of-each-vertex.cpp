class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
    vector<int> arr;
        for(int i=0;i<matrix.size();i++)
        {
            int x = 0;
            for(int j=0;j<matrix.size();j++)
            {
                x+= matrix[i][j];
            }
            arr.push_back(x);
        }
        return arr;
    }
};