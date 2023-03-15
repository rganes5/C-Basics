
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[20];
	setbuf(stdout,NULL);
	printf("Sample program to input and output character array \n");
	printf("Enter the name: ");
	scanf("%s",string);
	printf("The string entered is %s",string);
	return EXIT_SUCCESS;
}
