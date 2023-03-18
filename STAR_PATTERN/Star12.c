/*
 ============================================================================
 Name        : Star12.c
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
			puts("Star 11 \n");
			for(i=1;i<=7;i++){
//				i<=4?k++:k--;
				for(j=1;j<=7;j++){
					if(j==i){
							printf("\\");
					}
					else if(j==8-i){
						printf("/");
					}
					else{
						printf("*");
					}
				}
				printf("\n");
			}	return EXIT_SUCCESS;
}
