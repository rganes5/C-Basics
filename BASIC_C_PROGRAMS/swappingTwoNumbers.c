/*
 ============================================================================
 Name        : swappingTwoNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,temp;
	setbuf(stdout,NULL);
	printf("Swapping of two numbers \n");
	printf("Enter the two numbers: \n");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping: number1=%d  number2=%d \n",num1,num2);

	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping: number1=%d  number2=%d \n",num1,num2);


	return EXIT_SUCCESS;
}
