
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	setbuf(stdout,NULL);
	printf("To check the number whether it is positive or negative \n ");
	printf("Enter a number: ");
	scanf("%d",&num1);
	if(num1>=0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is negative ");

	}
	return EXIT_SUCCESS;
}
