
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[20];
	int i,length=0,flag=0,templength;
	setbuf(stdout,NULL);
	printf("To check whether a string is palindrome or not \n");
	printf("Enter a string: \n");
	scanf("%s",string);
	length=strlen(string);
	templength=length;
	for(i=0;i<=length/2;i++)
	{
		if(string[i]!=string[templength-1])
		{
			flag=1;
		}
		templength--;
	}
	if(flag==0)
	{
		printf("The string is palindrome");

	}
	else
	{
		printf("The string is not palindrome");
	}

	return EXIT_SUCCESS;
}
