
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[100],array2[100],i,limit,temp;
	setbuf(stdout,NULL);
	printf("Interchange the values of Two Arrays \n");
		printf("Enter the limit of the array\n");
		scanf("%d",&limit);
		printf("Enter the 1st array elements: \n");
		for(i=0;i<limit;i++)
		{
		scanf("%d",&array1[i]);
		}
		printf("Enter the 2nd array elements: \n");
		for(i=0;i<limit;i++)
		{
		scanf("%d",&array2[i]);
		}
		/*swapping*/
		for(i=0;i<limit;i++)
		{
			temp=array1[i];
			array1[i]=array2[i];
			array2[i]=temp;
		}
		printf("The Interchanged array are below :\n");
		printf("ARRAY1: \n");
		for(i=0;i<limit;i++)
				{
				printf("%d ",array1[i]);
				}
		printf("\nARRAY2:\n");
		for(i=0;i<limit;i++)
				{
				printf("%d ",array2[i]);
				}

	return EXIT_SUCCESS;
}
