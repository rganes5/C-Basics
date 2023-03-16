/*
 ============================================================================
 Name        : ArrayDupDel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j,values[20],k;
						setbuf(stdout,NULL);
						printf("Delete duplicate elements : \n");
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



							 for(i=0;i<n-1;i++){
								for(j=i+1;j<n;j++){
									if(values[i]==values[j])
									{
										for(k=j;k<n-1;k++){
										values[k]=values[k+1];
										}
										j--;
										n--;
									}
								}
							 }
							 printf("The Array after deletion of duplicate elements is  \n");
							 					for(i=0;i<n;i++){
							 						printf("%d\t",values[i]);
							 					}	return EXIT_SUCCESS;
}
