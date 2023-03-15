
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,n,j,values[20],k,flag;
							setbuf(stdout,NULL);
							printf("Delete Prime numbers from the Array : \n");
							printf("Enter the limit of the array: \n");
							scanf("%d",&n);
							printf("Enter the values of the array: \n");
							for(i=0;i<n;i++){
								scanf("%d",&values[i]);
							}
							printf("\nThe entered array is :  \n");
								for(i=0;i<n;i++){
									printf("%d\t",values[i]);
								}

								for(i=0;i<n;i++){
								 flag=0;
									for(j=1;j<values[i];j++){
										if(values[i]%j==0){
											flag++;
											}

									}
									if(flag==1)
									{
									for(k=i;k<n;k++){
									values[k]=values[k+1];
									}
									n--;
									i--;
									}

								}

							printf("\n The entered array after deletion of Prime numbers is :  \n");
									for(i=0;i<n;i++){
									printf("%d\t",values[i]);
									}

	return EXIT_SUCCESS;
}
