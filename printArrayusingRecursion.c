/**
* Print all elements of provided array using recursion
*/
void recursion(int* val,int size)
{
    static int i=0;
    if(i>=size)
    {
        return;
    }
    else
    {
        printf("%d ",val[i]);
        i++;
        recursion(val,size);
    }
}