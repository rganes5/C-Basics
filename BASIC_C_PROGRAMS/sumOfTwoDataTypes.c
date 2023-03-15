/*
 ============================================================================
 Name        : sumOfTwoDataTypes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	float num2,sum;
	setbuf(stdout,NULL);

	printf("Enter the first integer number: ");
	scanf("%d",&num1);
	printf("Enter the decimal number: ");
	scanf("%f",&num2);
	sum=num1+num2;
	printf("The sum of the two number is : %f",sum);
	return EXIT_SUCCESS;
}
