
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100],i,j,limit,temp;
	setbuf(stdout,NULL);
	printf("Array sorting \n");
	printf("Enter the limit : ");
	scanf("%d",&limit);
	printf("Enter the array elements: \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&array[i]);
	}
	/*Sorting starts here*/
	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("The sorted array is \n");
	for(i=0;i<limit;i++)
	{
		printf("%d ",array[i]);
	}
	return EXIT_SUCCESS;
}
