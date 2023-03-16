
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int matrix[3][3],i,j;
	setbuf(stdout,NULL);
	printf("Program to display multi-dimentional array \n");
	printf("Enter the array elements \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The matrix entered is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",matrix[i][j]);
		}
		printf("\n");

	}

	return EXIT_SUCCESS;
}
