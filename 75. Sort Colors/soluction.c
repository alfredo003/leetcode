void sortColors(int* nums, int numsSize) {
    int tmp =0;
    int i =0;
    while(i < numsSize-1)
    {
        if(nums[i] > nums[i+1])
        {
            tmp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1]=tmp;   
            i=0;         
        }
        else
            i++;
    }
}
