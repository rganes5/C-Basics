
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
		setbuf(stdout,NULL);
		printf("Program to print a sided pyramid for stars from left. \n");

		for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
				if(j<=i){
				printf("*");
				}
				else{
					printf(" ");
				}
			}printf("\n");
		}


	return EXIT_SUCCESS;
}
