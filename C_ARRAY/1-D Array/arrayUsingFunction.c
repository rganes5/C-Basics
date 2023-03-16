
#include <stdio.h>
#include <stdlib.h>
void getArray(int);
void displayArray(int);
int main(void) {
	int limit;
	setbuf(stdout,NULL);
	printf("Array demonstration using functions \n");
	printf("Enter the array limit\n");
	scanf("%d",&limit);
	getArray(limit);
	displayArray(limit);
	return EXIT_SUCCESS;
}
void getArray(int l)
{

	int array[20],i;
	printf("Enter the array elements\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&array[i]);
	}

}
void displayArray(int l)
{
	int array[20],i;
	for(i=0;i<l;i++)
	{
		printf("%d ",array[i]);
	}
}
