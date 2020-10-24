#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//int a[5]={1,2,3,4,5};

void resetArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
}
int* getArray()
{
	int a[5]={1,2,3,4,5};
	return a;
}
void main()
{
	//resetArray(a,sizeof(a));
	//printf("%d\n",sizeof(a));
	/*Show*/
	int *p;
	p=getArray();
	for(int i=0;i<5;i++)
	{
		printf("%d  ",p[i]);
	}
	getch();
}




