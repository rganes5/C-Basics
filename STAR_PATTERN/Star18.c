

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0,count=0;
	puts("Star 18");

	setbuf(stdout,NULL);
	for(i=1;i<=21;i++){
		count=k;

		i<=11?k++:k--;
		for(j=1;j<=21;j++){
			if(j>=12-k && j<=10+k){
				if(count>=9){
					count=count%10;
				}
				printf("%d",abs(count));
				j<11?count++:count--;
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}


	return EXIT_SUCCESS;
}
