/*
 ============================================================================
 Name        : UniqueElements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j,values[20],flag,temp,count=0;
		setbuf(stdout,NULL);
		printf("Unique elements : \n");
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
			printf("\nThe array after sorting is:\n");
			for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(values[i]>values[j]){
						temp=values[i];
						values[i]=values[j];
						values[j]=temp;
					}
				}
			}
			printf("\nThe Array after sorting: \n");
			for(i=0;i<n;i++){
				printf("%d\t",values[i]);
			}
			printf("\nThe numbers which are unique is : \n");

			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(i!=j){
						if(values[i]!=values[j]){
							flag=1;
						}
						else{
							flag=0;
							break;
						}
					}
				}
					if(flag==1){
						printf("%d ",values[i]);
						count++;
				}
			}
			printf("\nThe number of unique elements in the array is %d",count);

	return EXIT_SUCCESS;
}
