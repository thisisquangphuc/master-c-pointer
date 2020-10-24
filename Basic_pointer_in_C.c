#include <stdio.h>
#include <conio.h>

int a=255;
int *p=&a;


int main()
{
	int x[4], y[4];
    int *pt = &x[4];
    int *q = &y[0];
    printf("%p %p %d\n", (void*)pt, (void*)q, pt == q);


	printf("\nHello Phuc!");
	printf("\n&a = %d",&a);
	printf("\n*&a = %d",*&a);

	printf("\n&p = %d",&p);
	printf("\np = %d",p);
	printf("\n*&p = %d",*&p );
	printf("\n&*p = %d",&*p);


	getch();
	return 0;
}