/**
*Determine how many pairs number is in the array
* For example:
* input: n     = 9
*        array = 10 20 20 10 10 30 50 10 20
* Output: 3
*/
int sockMerchant(int n, int ar_count, int* ar) {

    int *p=(int*)malloc(n*sizeof(int));

    memset(p,-1,sizeof(int)*n);

    for(int j=0;j<n;j++)
    {
        //p[j]=-1;
        printf(" %3d",ar[j]);
    }
    //p[0]=0;
    printf("\n");
    int pairs=0;
    for(int j=0;j<n-1;j++)
    {
        if(p[j]==-1)
        {
            for(int i=j+1; i<n; i++)
            {
                if((ar[j]==ar[i]))
                {
                    pairs++;
                    p[i]=0;
                    break;
                    //printf(" %d",p[j]);
                }
            }
        }
        printf(" %3d",p[j]);
    }
    return pairs;
}