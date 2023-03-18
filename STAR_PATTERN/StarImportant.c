/*
 ============================================================================
 Name        : StarImportant.c
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
	printf("This is one of the important patterns in C\n");
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if((i==1||i==7||j==1||j==7) || (i>=3&&i<=5&&j>=3&&j<=5)){
				if(i==4&&j==4)
				{
					printf(" ");
				}
				else{
				printf("*");
				}
			}
				else{
					printf(" ");
				}
			}printf("\n");
		}
	return EXIT_SUCCESS;
}
