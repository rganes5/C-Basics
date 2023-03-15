
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,product;
	setbuf(stdout,NULL);
	printf("Multiplication Table\n");
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d X ",i);
		printf("%d",n);
		product=i*n;
		printf("= %d ",product);
		printf("\n");
	}

	return EXIT_SUCCESS;
}
