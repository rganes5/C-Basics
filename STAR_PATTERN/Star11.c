/*
 ============================================================================
 Name        : Star11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0,count=0;
			setbuf(stdout,NULL);
			puts("Star 11 \n");
			for(i=1;i<=9;i++){
				count=1;
				i<=5?k++:k--;
				for(j=1;j<=5;j++){
					if(j>=6-k){
							printf("%d",count);
							count++;
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
