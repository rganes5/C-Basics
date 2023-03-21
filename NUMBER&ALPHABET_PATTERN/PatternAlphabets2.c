/*
 ============================================================================
 Name        : PatternAlphabets2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=5;
	setbuf(stdout,NULL);
	puts("PatternAlphabets2\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c ",j+64);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
