

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int i,a[100],b[100],c[100],n1,n2,n3,k=0;
		setbuf(stdout,NULL);
		printf("\nEnter the first array limit \n");
		scanf("%d",&n1);
		printf("\nEnter the first array Elements \n");
			for(i=0;i<n1;i++)
			{
				scanf("%d",&a[i]);
			}
		printf("\nEnter the second array limit \n");
		scanf("%d",&n2);
			for(i=0;i<n2;i++)
			{
				scanf("%d",&b[i]);
			}
		printf("\nThis is the first array entered: \n");
			for(i=0;i<n1;i++)
			{
				printf("%d ",a[i]);
			}
		printf("\nThis is the Second array entered: \n");
			for(i=0;i<n2;i++)
			{
				printf("%d ",b[i]);
			}
			//The merging starts here
			n3=n1+n2;
			for(i=0;i<n3;i++)
			{
				c[i]=a[i];
				if(i>=n1)
				{
					c[i]=b[k];
					k++;
				}
			}
			printf("\nThis is the Merged array: \n");
						for(i=0;i<n3;i++)
						{
							printf("%d ",c[i]);
						}



	return EXIT_SUCCESS;
}
