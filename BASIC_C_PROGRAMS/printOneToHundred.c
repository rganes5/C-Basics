
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Print 1 to 100 \n");
	int i;
	setbuf(stdout,NULL);
	for(i=1;i<=100;i++){
		printf("%d\n",i);
	}
	return EXIT_SUCCESS;
}
