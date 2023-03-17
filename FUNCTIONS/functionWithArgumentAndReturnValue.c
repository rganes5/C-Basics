
#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	int a,b,res;
	setbuf(stdout,NULL);
	puts("Function with argument and return value \n");
	printf("Enter the two numbers: \n");
	scanf("%d%d",&a,&b);
	res=sum(a,b);
	printf("The sum of the two numbers is %d",res);
	return EXIT_SUCCESS;
}
int sum(int num1,int num2){
	int result;
	result=num1+num2;
	return result;

}
