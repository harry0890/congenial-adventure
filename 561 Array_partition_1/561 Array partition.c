#include <stdio.h>
#include <stdlib.h>

unsigned int arrayPairSum(unsigned int* nums, int numsSize) {
    int i,j;
    unsigned int sum=0, tmp=0;

	for(i=numsSize*2; i>=0; i--){
		for (j=0; j<i; j++){
			if(nums[j] > nums[j+1]){
				tmp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=tmp;
			}
		}
	}
	
	for(i=0; i<numsSize*2; i++)
		printf("[%2d] ",*(nums + i));
	printf("\n");
	
    for(i=0; i<numsSize*2; i+=2){
       if (nums[i] > nums[i+1])
            sum+=nums[i+1];
       else
            sum+=nums[i];
    }
    return sum;
}


int main()
{
	unsigned int array[] = {1,4,3,2, -10, -7, 6, 2};
	unsigned int sum;
	sum = arrayPairSum(array,4);
	printf("The sum is %d\n",sum);

	return 0;
}



