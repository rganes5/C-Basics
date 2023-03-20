
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	setbuf(stdout,NULL);
	printf("LADDER PATTERN 1 \n");
	for(i=1;i<=3;i++){
		for(j=1;j<=i*(i+i);j++){
			if(j%(2*i)==0){
				printf("*\n");
			}
			else{
				printf("*");
			}
		}
		if(i!=3){
		for(k=1;k<=3;k++){
			printf("*\n");
		}
		}
	}

	return EXIT_SUCCESS;
}
