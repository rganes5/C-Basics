/*
 ============================================================================
 Name        : Star9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void) {
	int i,j,k=0;
			setbuf(stdout,NULL);
			puts("Star 5 \n");
			for(i=1;i<=4;i++){
				k=i;
				for(j=1;j<=7;j++){
					if(j>=5-i && j<=3+i){
							printf("%d",k);
							j<4?k++:k--;
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
