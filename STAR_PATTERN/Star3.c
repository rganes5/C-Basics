/*
 ============================================================================
 Name        : Star3.c
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
	puts("Star 3"); /* prints !!!Hello World!!! */
	setbuf(stdout,NULL);
	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			if( j>=6-i && j<=4+i ){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}



	return EXIT_SUCCESS;
}
