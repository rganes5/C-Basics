
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,sum=0;
	setbuf(stdout,NULL);
	printf("Sum of N numbers\n");
	printf("Enter a number");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		sum=sum+i;
		printf("%d",i);
		if(i!=j)
		{
		printf("+");
		}

	}
	printf("=%d",sum);
	return EXIT_SUCCESS;
}
