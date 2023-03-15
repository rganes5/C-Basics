
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,flag=0;
	setbuf(stdout,NULL);
	printf("Prime number\n");
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("The number %d is a prime number",n);
		}
		else
		{
			printf("The number %d is a Not prime number",n);
		}

	return EXIT_SUCCESS;
}
