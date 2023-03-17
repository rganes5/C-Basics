
#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	puts("Function with argument and without return value \n");

	printf("Enter the two numbers: \n");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	return EXIT_SUCCESS;
}
void sum(int num1,int num2)
{
	int result;
	result=num1+num2;
	printf("The sum of the two numbers is: %d",result);

}
