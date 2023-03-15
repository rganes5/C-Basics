/*
 ============================================================================
 Name        : charOutput.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	setbuf(stdout,NULL);
	printf("Enter a character : \n");
	scanf("%c",&a);
	printf("The character that you have entered is : %c", a);
return EXIT_SUCCESS;

}
