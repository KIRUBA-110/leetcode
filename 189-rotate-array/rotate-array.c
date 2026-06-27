void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *arr,int i,int j)
{
    while(i<j)
    {
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
}
void rotate(int* nums, int n, int k) {
    k = k % n;
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
}
