/*
 ============================================================================
 Name        : PatternNumbers2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	setbuf(stdout,NULL);
	printf("Program to print a sided pyramid for numbers in reverse. \n");

	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf("%d",j);
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
