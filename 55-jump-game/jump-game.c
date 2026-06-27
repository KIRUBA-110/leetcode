bool canJump(int* nums, int n) {
    int steps = nums[0];
    for(int i=1;i<n;i++)
    {
        steps--;
        if(steps < 0) return false;
        if(i == n-1) return true;
        if(steps < nums[i])
        {
            steps = nums[i];
        }
    }
    return true;
}