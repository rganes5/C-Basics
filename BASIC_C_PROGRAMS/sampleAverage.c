#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,average;
	setbuf(stdout,NULL);
printf("Average of 3 numbers\n");
printf("Enter three numbers: \n");
scanf("%f%f%f",&a,&b,&c);
average=(a+b+c)/3;
printf("The average of the three numbers is: %f", average);
	return EXIT_SUCCESS;

}
