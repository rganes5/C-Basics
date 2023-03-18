/*
 ============================================================================
 Name        : Star8.c
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
		puts("Star 5 \n");
		for(i=1;i<=4;i++){
			for(j=1;j<=7;j++){
				if(j>=i && j<=8-i){
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
