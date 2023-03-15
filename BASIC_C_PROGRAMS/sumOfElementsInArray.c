
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],sum=0,i,limit;
	setbuf(stdout,NULL);
	printf("Sum of array elements \n");
	printf("Enter the array limit :\n");
	scanf("%d",&limit);
	printf("Enter the array elements : \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The sum is \n");
	for(i=0;i<limit;i++)
		{
			sum=sum+a[i];
		}
		printf("%d", sum);


	return EXIT_SUCCESS;
}
