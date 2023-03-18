/*
 ============================================================================
 Name        : Star20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,c=0;
		setbuf(stdout,NULL);
		printf("LADDER PATTERN 1 \n");
		for(i=1;i<=6;i++){
			for(j=1;j<=(14-i-c);j++){
				printf("*");
				}printf("\n");
			c++;
				for(k=1;k<=2;k++){
							printf("*\n");
						}
		}


return EXIT_SUCCESS;
}
