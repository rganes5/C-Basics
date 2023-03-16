
#include <stdio.h>
#include <stdlib.h>

void getArray(int ,int[20][20]);
void addArray(int,int[20][20],int[20][20],int[20][20]);
void displayArray(int,int[20][20]);


int main(void) {
	puts("Matrix using functions \n");
	int limit,matrix1[20][20],matrix2[20][20],sum[20][20];
	setbuf(stdout,NULL);
		printf("Enter the size of array: \n");
		scanf("%d",&limit);
		getArray(limit,matrix1);
		getArray(limit,matrix2);
		addArray(limit,matrix1,matrix2,sum);
		displayArray(limit,sum);

		return EXIT_SUCCESS;
	}
	void getArray(int limit,int matrix[20][20]){
		int i,j;
		printf("Enter the array values \n");
		for(i=0;i<limit;i++){
			for(j=0;j<limit;j++){
					scanf("%d",&matrix[i][j]);
			}
		}
	}

	void addArray(int limit,int matrix1[20][20],int matrix2[20][20],int sum[20][20]){
		int i,j;
		for(i=0;i<limit;i++){
					for(j=0;j<limit;j++){
							sum[i][j]=matrix1[i][j]+matrix2[i][j];
			}
		}
	}

	void displayArray(int limit,int sum[20][20]){
		int i,j;
		printf("Array elements are: \n");
		for(i=0;i<limit;i++){
			for(j=0;j<limit;j++){
				printf(" %d\t",sum[i][j]);
				}printf("\n");
		}
	}

