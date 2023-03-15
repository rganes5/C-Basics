/*
 ============================================================================
 Name        : simpleInterest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float n;
	float r;
	float si;
	setbuf(stdout,NULL);
	printf("Simple interest calculator \n");
	printf("Enter the Principle amount : ");
	scanf("%d",&p);
	printf("Enter the number of years: ");
	scanf("%f",&n);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("\nThe simple interest is:    %f",si);


	return EXIT_SUCCESS;
}
