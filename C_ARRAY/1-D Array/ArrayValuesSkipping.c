
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,values[20];
	setbuf(stdout,NULL);
	printf("Array to print the array after skipping two values from the multiple of 5\n");
	printf("Enter the limit of the array: \n");
	scanf("%d",&n);
	printf("Enter the values of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&values[i]);
	}
	printf("The entered array is :  \n");
		for(i=0;i<n;i++){
			printf("%d\t",values[i]);
		}
		printf("\nThe array after skipping the values after the multiple of 5 is: \n");
		for(i=0;i<n;i++){
		if(values[i]%5==0){
			printf("%d\t",values[i]);
			i=i+2;
		}
		else{
			printf("%d\t",values[i]);
		}
	}




	return EXIT_SUCCESS;
}
