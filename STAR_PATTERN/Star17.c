
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
			setbuf(stdout,NULL);
							puts("Star 14 \n");
							for(i=1;i<=6;i++){
								k=1;
								for(j=1;j<=6;j++){
									if(j<=i){
										if(k){
											printf("%d",k);
										k=0;
										}
										else{
										printf("%d",k);
										k=1;
									}
									}
									else{
										printf(" ");
									}
								}printf("\n");
								}
	return EXIT_SUCCESS;
}
