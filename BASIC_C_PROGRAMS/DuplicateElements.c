
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j,values[20],count;
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
//Process starts here

								 for(i=0;i<n-1;i++){
									 count=1;
									for(j=i+1;j<n;j++)
									{
										if(values[i]==0)
										{
										break;
										}
										if(values[i]==values[j])
										{
										count++;
										values[j]=0;
										}
									}
									if(count==2)
									printf("\n %d occurs %d times \n",values[i],count);
								 }

										return EXIT_SUCCESS;

}
