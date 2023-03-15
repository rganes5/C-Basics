
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j,values[20],flag;
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

								for(i=0;i<n;i++)
								{
									flag=0;
									//Even Checking
									if(values[i]%2==0)
									{
									values[i]=1;
									continue;
									}
									//Prime checking
									for(j=2;j<values[i];j++)
									{
										if(values[i]%j==0)
											{
											flag++;
											}
									}
									if(flag==0)
									{
									values[i]=0;
									}
								}



							printf("\n The entered array after Replacing of Prime numbers by 0 and even numbers by 1 is :  \n");
									for(i=0;i<n;i++)
									{
									printf("%d\t",values[i]);
									}
	return EXIT_SUCCESS;
}
