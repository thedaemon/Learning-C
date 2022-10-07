#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;

	srand(time(&t));

	for (ctr = 0; ctr < 10; ctr++)
	{
		nums[ctr] = (rand() % 99) + 1;
	}
	
	//list the array before sorting
	puts("\nHere is the list before the sort:");
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d\n", nums[ctr]);
	}

	// sort the array
	for (outer = 0; outer < 9; outer++)
	{
		didSwap = 0; //becomes true if list is not yet ordered
		for (inner = outer; inner < 10; inner++)
		{
			if (nums[inner] < nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer];

				nums[outer] = temp;
				didSwap = 1;
			}
		}
		if (didSwap ==0)
		{
			break;
		}
	}

	//list the array sorted
	puts("\nHere is the list after the sort:");
	for (ctr = 0; ctr < 10; ctr++)
		printf("%d\n", nums[ctr]);
	return(0);
}

