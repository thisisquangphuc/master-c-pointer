#include <stdio.h>

#define row 4
#define col 5
int main()
{
	char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
	char **cp[] = {c+3, c+2, c+1, c};
	char ***cpp = cp;
	
	static int table[row][col]={
								{13,15,17,19,21},
								{20,22,24,26,28},
								{31,33,35,37,39},
								{40,42,44,46,48}
								};
	// int 4byte
	int cc=10;
	int i,j;
	
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			 table[i][j]+=cc;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%5d",table[i][j]);
		printf("\n");
	}
	
	//if(table==table[0])
	 //   printf("SAME\n");
		
	printf("Test1: %d - %d - %d - %d \n", *(table[2]+1), *(*(table+2)+1), table, *table+1);
	
	printf("\nAdress of c: [%d ][ %d ][ %d ][ %d]  ",&c[0],&c[1],&c[2],&c[3]);
	
	printf("\nChuoi cp: %s %s %s %s", **cp, **(cp+1), **(cp+2), **(cp+3));
	printf("\nValue of cp : [%d ][ %d ][ %d ][ %d]  ", cp[0], cp[1], cp[2], cp[3]); 
	printf("\nAdress of cp : [%d ][ %d ][ %d ][ %d]  ", &cp[0], &cp[1], &cp[2], &cp[3]);

	printf("\nAdress cpp ban dau: %d",cpp);
	printf("\n--------------Lan 1---------------");
	printf("\n%s ", **++cpp);  //cong dia chi cpp
	printf("\nAdress cpp sau lan 1: %d",cpp);
	printf("\nChuoi cp: %s %s %s %s", **cp, **(cp+1), **(cp+2), **(cp+3));
	printf("\nValue of cp  : [%d ][ %d ][ %d ][ %d]  ", cp[0], cp[1], cp[2], cp[3]); 
	printf("\nAdress of cp : [%d ][ %d ][ %d ][ %d]  ", &cp[0], &cp[1], &cp[2], &cp[3]);
	
	printf("\n--------------Lan 2---------------");
	printf("\n%s ", *--*++cpp+3);  //  *(*(++cpp)-1)+3)
	printf("\nAdress cpp sau lan 2: %d",cpp);
	printf("\nChuoi cp: %s %s %s %s", **cp, **(cp+1), **(cp+2), **(cp+3));
	printf("\nValue of cp  : [%d ][ %d ][ %d ][ %d]  ", cp[0], cp[1], cp[2], cp[3]); 
	printf("\nAdress of cp : [%d ][ %d ][ %d ][ %d]  ", &cp[0], &cp[1], &cp[2], &cp[3]);
	
	printf("\n--------------Lan 3---------------");
	printf("\nGia tri cpp lan 2: %s - size = %d  ", **cpp,sizeof(**cpp)); 
	printf("\n%s %s %s %s ", *cpp[0], *cpp[-1], *cpp[-2], *cpp[1]);
	printf("\nAdress cpp sau lan 3: %d",cpp);
	printf("\n%s ", cpp[-1][-1]+1);
	
	return 1;
}
