
#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int res;
	setbuf(stdout,NULL);
	puts("Function without argument and with return value\n");
	res=sum();
	printf("The result of the two numbers is : %d",res);
	return EXIT_SUCCESS;
}
int sum()
{
	int a,b,result;
		printf("Enter the two numbers : \n");
		scanf("%d%d",&a,&b);
		result=a+b;
		return result;
}
