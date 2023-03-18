/*
 ============================================================================
 Name        : Star13.c
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
				puts("Star 13 \n");
				for(i=1;i<=9;i++){
					i<=5?k++:k--;
					for(j=1;j<=9;j++){
						if(j<=6-k||j>=4+k){
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
