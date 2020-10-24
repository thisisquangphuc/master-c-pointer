#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int n=0;
	scanf("%d",&n);

	int *p=(int*) malloc(n*sizeof(int));

	printf("%d \n ",p);
	if(p != NULL)
	{
		for(int i=0;i<n+1;i++)
		{
			printf("%d ",*(p+i));
		}
		free(p);
	}
	
}

