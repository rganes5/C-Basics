
#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {

	sum();
	return EXIT_SUCCESS;
}
void sum()			/* Function definition*/
{
	int num1,num2,num3,sum=0;
	setbuf(stdout,NULL);

	printf("Function without argument and without a return value \n");
	printf("Enter the three numbers :\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	sum=num1+num2+num3;
	printf("The sum of the three numbers is : %d",sum);

}
