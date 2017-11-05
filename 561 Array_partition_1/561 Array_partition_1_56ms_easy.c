void quicksort(int* nums, int low, int high) {
    int i = low;
    int j = high;
    int x = nums[i];
    if(i>j){  
        return ;  
    }
    while(i < j) {
        while(i < j && nums[j] >= x)
            j--;
        nums[i] = nums[j];
        while(i < j && nums[i] <= x)
            i++;
        nums[j] = nums[i];
    }
    nums[i] = x;
    quicksort(nums, low, i-1);
    quicksort(nums, i+1, high);
}

int arrayPairSum(int* nums, int numsSize) {
    int i;
    int low = 0, high = numsSize-1;
    int sum = 0;
    quicksort(nums, 0, numsSize-1);    
    for(i = 0; i < numsSize-1; i = i+2)
        sum += nums[i];
    return sum;
} 
 
int main()
{
	int array[] = {1,4,3,2};
	int sum;
	sum = arrayPairSum(array,4);
	printf("The sum is %d\n",sum);

	return 0;
}

