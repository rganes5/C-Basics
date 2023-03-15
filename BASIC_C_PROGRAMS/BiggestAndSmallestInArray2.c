
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[20],i,n,biggest,smallest;
		setbuf(stdout,NULL);
		puts("Biggest and Smallest in Array using the Sort\n");
		printf("Enter the limit of the array\n");
		scanf("%d",&n);
		printf("Enter the array elements: \n");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		smallest=a[0];
		biggest=a[0];
		for(i=0;i<n-1;i++){
			if(a[i]<smallest){
				smallest=a[i];
			}
			if(a[i]>biggest){
				biggest=a[i];
			}
		}

		printf("The biggest number in the array is %d and the smallest number in the array is %d ",biggest,smallest);

	return EXIT_SUCCESS;
}
