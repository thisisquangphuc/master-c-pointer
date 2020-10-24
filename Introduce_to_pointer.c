#include <stdio.h>
#include <conio.h>


void main()
{	
	float fl=10.1;
	int idx = 30;
	float* p2f;

	p2f=&fl;	
	printf("%lf", *p2f );
	getch();
}