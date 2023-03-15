
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[20],i,j,n,temp;
	setbuf(stdout,NULL);
	puts("Biggest and Smallest in Array using the Sort\n");
	printf("Enter the limit of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){

			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
	}

	printf("The biggest number in the array is: %d\n",a[0]);
	printf("The smallest number in the array is :%d\n",a[n-1]);



	return EXIT_SUCCESS;
}
