int majorityElement(int* nums, int n) {
    int count = 0;
    int majority = 0;
    for(int i=0;i<n;i++)
    {
        if(count == 0)
        {
            majority = nums[i];
            count = 1;
        }
        else if(nums[i] == majority)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return majority;
}