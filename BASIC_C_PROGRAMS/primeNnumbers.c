
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,j,flag=0;
	setbuf(stdout,NULL);
	printf("Prime N numbers\n");
	printf("Enter a number");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
	for(i=j;i<=j/2;i++)
	{
		if(j%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("%d ",j);
	}
	}
	return EXIT_SUCCESS;
}
