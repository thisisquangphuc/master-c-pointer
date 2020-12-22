/**Sample Input: a11472o5t6
*Sample Output : 0 2 1 0 1 1 1 1 0 0 
*Explanation : Print ten space-separated integers in a single line denoting the frequency of each digit from  to .
*
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    int count[10]={0};
    int i=0;
    do {
        if((s[i] >= 0x30) && (s[i] <= 0x39))
        {
            count[s[i]-0x30]++;
        }
        i++;
    }while (s[i]!='\0');
    for(i=0;i<10;i++)
    {
        printf("%d ",count[i]);
    }
    return 0;
}
