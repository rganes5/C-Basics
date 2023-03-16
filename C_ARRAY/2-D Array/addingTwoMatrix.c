
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int matrix1[20][20],matrix2[20][20],sum[20][20],i,j,limit;
	setbuf(stdout,NULL);
	printf("Addition of two matrix \n");
	printf("Enter the array size: \n");
	scanf("%d",&limit);
	printf("Enter the first array elements : \n");
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter the second array elements : \n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("The sum of two arrays is \n");
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			printf(" %d\t",sum[i][j]);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
