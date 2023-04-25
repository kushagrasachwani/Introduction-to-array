#include<stdio.h>

main()
{
	int i,n,a[100],b[100];
	printf("Enter the limit=");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of a[%d]=", i);
		scanf("%d", &a[i]);
	
    }
    
    for(i=0;i<n;i++)
    {
    	b[i]=a[i];
	}
	printf("\nValues");
	for(i=0;i<n;i++)
    {
    	printf("\n%d",b[i]);
	}
	
}
