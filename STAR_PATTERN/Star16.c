

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	setbuf(stdout,NULL);
printf("This is a program to output Star pattern 17.\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=8;j++){
			if(j>=5-i && j<=9-i){
				printf("*");
			}
			else{
				printf(" ");
			}

		}printf("\n");
	}
return EXIT_SUCCESS;
}
