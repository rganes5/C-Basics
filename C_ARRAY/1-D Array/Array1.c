
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,pos,value;
	setbuf(stdout,NULL);
	printf("Enter the limit of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements : \n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("The Entered array elements are : \n");
		for(i=0;i<n;i++){
		printf("%d  ",a[i]);
		}
	printf("\nEnter the position in which you want to enter the new element: \n");
	scanf("%d",&pos);
	printf("Enter the value to be inserted: \n");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	printf("The Array after insertion of the new element is: \n");
			for(i=0;i<=n;i++){
			printf("%d  ",a[i]);
			}


	return EXIT_SUCCESS;
}
