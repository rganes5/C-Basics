/*
 ============================================================================
 Name        : Ladder5.c
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
				for(j=1;j<=(i+2);j++){
					printf("\n");
					for(k=1;k<=j;k++){
						if(k<=j)
						{
							printf("X ");
						}
//						else
//						{
//							printf("\n");
//						}
					}
				}
			}
			return EXIT_SUCCESS;
}
