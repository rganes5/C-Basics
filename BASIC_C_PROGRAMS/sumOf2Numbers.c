/*
 ============================================================================
 Name        : sumOf2Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1;
	float number2,sum;
	setbuf(stdout,NULL);
	printf("This is to calculate sum of two numbers\n");
	printf("Please enter the first number\n ");
	scanf("%d",&number1);
	printf("Enter the second number\n ");
	scanf("%f",&number2);
	sum=number1+number2;
	printf("The sum of the two numbers is %f",sum);
	return EXIT_SUCCESS;
}

