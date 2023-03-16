
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,limit,temp;
	setbuf(stdout,NULL);
	printf("ARRAY INPUT OUPUT \n");
	printf("Enter the array limit \n");
	scanf("%d",&limit);
	printf("Enter the inputs: \n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit/2;i++){
		temp=a[limit-i-1];
		a[limit-i-1]=a[i];
		a[i]=temp;
	}

	printf("Here is the reversal : \n");
	for(i=0;i<limit;i++)
	{
	printf("%d",a[i]);
	if(i<limit-1){
	printf(",");
	}
	}
	return EXIT_SUCCESS;
}
