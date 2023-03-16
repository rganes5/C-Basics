
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int values[20],i,limit,temp;
	setbuf(stdout,NULL);
	puts("Array Reversal");

	printf("Enter the array elements: \n");
	scanf("%d",&limit);
	printf("Enter the array elements\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	printf("This is the reversal of the array\n");
	for(i=0;i<limit/2;i++){
		temp=values[i];
		values[i]=values[limit-i-1];
		values[limit-i-1]=temp;
	}
	printf("\n");
	for(i=0;i<limit;i++){
	printf("%d\t",values[i]);
	}


	return EXIT_SUCCESS;
}
