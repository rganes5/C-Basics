

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int values[50],product[50],i,limit,temp;
	setbuf(stdout,NULL);
	printf("To multiply adjacent values in an array: \n");

	printf("Enter the array limit \n");
	scanf("%d",&limit);
	printf("Enter the array values \n");
	for(i=0;i<limit;i++){
	scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		temp=values[i]*values[i+1];
		product[i]=temp;
	}

	printf("The product array is: ");
	for(i=0;i<limit-1;i++){

		printf("%d ",product[i]);
	}
	return EXIT_SUCCESS;
}
