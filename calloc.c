#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
     printf("Array size : ");
     scanf("%d",&n);
     int *ar=calloc(n,sizeof(int));
     if(ar==NULL)
     {
         printf("Unable to allocate memory");
    }
     printf("Enter elements : ");
     for(i=0;i<n;i++)
       scanf("%d",ar+i);
     printf("Given array : \n");
	 for(i=0;i<n;i++)
        printf("%d ",*(ar+i));
     printf("Removing 1st element i.e ar[0]=%d\n",ar[0]);
    for(i=1;i<n;i++)
      ar[i-1]=ar[i];
    ar=realloc(ar,(n-1)*sizeof(int));
    printf("Modified array: \n");
        for(i=0;i<n;i++)
          printf("%d ",ar[i]);
}
        
      
    
