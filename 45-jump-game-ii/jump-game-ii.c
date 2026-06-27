int jump(int* nums, int n) {
    int jump = 0;
    int curr = 0;
    int far = 0;
    for (int i=0;i<n-1;i++)
    {
        if(i+nums[i] > far)
        {
            far = i+nums[i];
        }
        if(i == curr)
        {
            jump++;
            curr = far;
        }
    }
    return jump;
}