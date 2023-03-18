/*
 ============================================================================
 Name        : Star7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0;
		setbuf(stdout,NULL);
		puts("Star 7 \n");
		for(i=1;i<=7;i++){
			i<=4?k++:k--;
			for(j=1;j<=4;j++){
				if(j<=k){
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
