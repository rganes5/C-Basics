

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,operation;
	float result;
	setbuf(stdout,NULL);
	printf("Arithmetic operation \n");
	printf("Enter two numbers first : ");
	scanf("%d%d",&num1,&num2);
	printf("Enter 1 for addition, Enter 2 for subtraction, Enter 3 for multiplication, Enter 4 for division ");
	scanf("%d",&operation);
	if(operation==1)
	{
		result=num1+num2;
//		printf("result is %f",result);
	}
	else if(operation==2)
		{
		result=num1-num2;
//		printf("result is %f",result);
		}
	else if(operation==3)
		{
		result=num1*num2;
//		printf("result is %f",result);
		}
	else if(operation==4)
		{
		result=num1/num2;
//		printf("result is %f",result);
		}
	else
		{
		printf("You are a fool ");
		}
	printf("result is %f",result);

	return EXIT_SUCCESS;
}
