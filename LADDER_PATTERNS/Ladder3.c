/*
 ============================================================================
 Name        : Ladder3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
		setbuf(stdout,NULL);
		printf("LADDER PATTERN 1 \n");
		for(i=1;i<=3;i++){
			for(j=1;j<=3*i;j++){
					printf("*");
				}printf("\n");

			if(i<=3){
			for(k=1;k<=i;k++){
				printf("*\n");
			}
			}
		}	return EXIT_SUCCESS;
}
