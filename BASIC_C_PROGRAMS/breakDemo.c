
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	setbuf(stdout,NULL);
	printf("Break demonstration\n");
	for(i=0;i<=10;i++)
	{
		printf("Hi ");
		if(i==5)
		{
			break;
		}
		printf("Hello ");
	}
	printf("Finished");
	return EXIT_SUCCESS;
}
