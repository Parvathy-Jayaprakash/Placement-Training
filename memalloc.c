#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n=10;
	int *p = malloc(n);
    if (p==NULL)
    {
        printf("Unable to allocate memory");
    }
    printf("Allocated %d bytes of memory\n",n);
    printf("%p\n%p\n%p",p,p+1,p+2);
}