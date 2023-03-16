/*
 ============================================================================
 Name        : ArrayDeletion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,pos;
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

		for(i=pos-1;i<n-1;i++){
			a[i]=a[i+1];
		}
		n--;
		printf("The Array after deletion of the new element is: \n");
				for(i=0;i<n;i++){
				printf("%d  ",a[i]);
				}	return EXIT_SUCCESS;
}
