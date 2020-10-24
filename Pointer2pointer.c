#include <stdio.h>
#include <conio.h>
#include <string.h>

int a[]={1,2,3,4,5};
int b=10;
int *p=&b;
int count = sizeof(a) / sizeof(int);
char *names[] = {"phuc","duy","khoa","nhat","nam"};
char **c_names =names;
int *c_a=a;

int main()
{
	
	for(int i=0;i<count;i++)
	printf("%s la %d\n",*(c_names+i),*(c_a+i) );
	printf("size of int = %d\nsize of array = %d\nsize of pointer = %d",sizeof(int),sizeof(a),sizeof(c_names));
	printf("\nb address:%d\np adress:%d,%d\n",&b,*&p,&*p );
	return 0;
}
