
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,sum=0;
	setbuf(stdout,NULL);
	printf("Sum of n odd numbers\n");
	printf("Enter the number");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
			printf("%d",i);
			if(i<j-1)
					{
						printf("+");
					}
		}

	}
	printf("=%d",sum);


	return EXIT_SUCCESS;
}
