

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	setbuf(stdout,NULL);
	printf("To find the biggest of three numbers \n");
	printf("Enter the three numbers :  ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf("%d is the greatest",num1);
	}
	else if(num2>num3)
	{
		printf("%d is the greatest",num2);
	}
	else{
		printf("%d is the greatest",num3);
	}

	return EXIT_SUCCESS;
}
