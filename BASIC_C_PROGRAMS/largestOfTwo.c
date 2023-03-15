
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("The number %d is greater",num1);
	}
	else
	{
		printf("The number %d is the greatest",num2);
	}

	return EXIT_SUCCESS;
}
