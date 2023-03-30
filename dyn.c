#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *number=(int*)malloc(4*sizeof(int));
	number[0]=1;
	number[1]=2;
	number[2]=3;
	for(int i=0;i<4;i++)
	{
		printf("%d\n",number[i]);
	}
}