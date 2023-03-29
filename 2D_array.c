#include<stdio.h>
int main()
{
  int a[20][20];
  int x,y,i,j;
  printf("enter number of rows and columns :");
  scanf("%d %d",&x,&y);
  printf("enter the elements of matrix a:\n");
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
	{
	  scanf("%d", &a[i][j]);
	}
  }
  printf("\matrix:\n");
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
       printf("%d ",a[i][j]);
    }
	printf("\n");
  }
  return 0;
}