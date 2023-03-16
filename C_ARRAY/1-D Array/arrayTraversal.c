
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int values[100],i,limit,searchkey,flag=0;
	setbuf(stdout,NULL);
	printf("values Traversal \n");
	printf("Enter the values limit \n");
	scanf("%d",&limit);
	printf("\nEnter the values elements\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}
	printf("Enter the search key to be checked : ");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++)
		{
			if(searchkey==values[i])
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
	{
		printf("The search key %d is found in the values at %d position.",searchkey,i+1);

	}else
	{
		printf("The search key %d is not found in the values ",searchkey);

	}
	return EXIT_SUCCESS;
	}
