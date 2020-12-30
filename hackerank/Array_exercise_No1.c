/* Remove duplicate elements in array */
void remove_duplicate_element()
{
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				printf("j=%d, n=%d\n ", j,n);
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
					n--;
					j--;
				in();
			}
		}
	}
}

/* Remove duplicate in sorted array */
void romove_duplicate_in_sorted _array()
{
	j=0;
	for (i=1;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			j++;
			a[j]=a[i+1];
		}
	}
	n=j;
	in();
}