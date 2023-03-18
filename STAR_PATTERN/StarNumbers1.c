

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	setbuf(stdout,NULL);
	puts("Star Numbers \n"); /* prints !!!Hello World!!! */
	for(i=1;i<=4;i++){
		k=1;
		for(j=1;j<=7;j++){
			if(j>=5-i&&j<=3+i){
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
