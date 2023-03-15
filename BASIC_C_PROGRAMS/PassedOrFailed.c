
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Passed or failed \n");
	printf("Enter the marks \n");

	scanf("%f",&mark);
	if(mark>=50)
	{
		printf("Passed");
	}
	else{
		printf("Failed");
	}

	return EXIT_SUCCESS;
}
