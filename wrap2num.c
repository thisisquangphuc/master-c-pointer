#include <stdio.h>
#include <conio.h>

//void wrap(int a,int b);

void main()
{
	int a=10;
	int b=5;
	wrap(&a,&b);  //call by reference 
	printf("a=%d, b=%d",a,b);
	getch();
} 









void wrap(int *a,int *b){
	*a=*a+*b;                      
	*b=*a-*b;
	*a=*a-*b;
}
