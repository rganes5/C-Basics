
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100],flag=0,limit,i;
	setbuf(stdout,NULL);
	printf("Number of even numbers in an array \n");
	printf("Enter the values limit \n");
		scanf("%d",&limit);
		printf("\nEnter the values elements\n");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&array[i]);
		}
	/*Even number findings starts here*/
		for(i=0;i<limit;i++)
		{
		if(array[i]%2==0)
		{
			flag++;
		}
		}
		printf("The number of even numbers is %d",flag);


	return EXIT_SUCCESS;
}
