/*
 ============================================================================
 Name        : Star10.c
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
			puts("Star 10 \n");
			for(i=1;i<=7;i++){
				k=7-i;
				for(j=1;j<=7;j++){
					if(j<=8-i){
							printf("%d",k);
							k--;
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}	return EXIT_SUCCESS;
}
