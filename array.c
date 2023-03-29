#include<stdio.h>
int main()
{
    int a[10],sum=0,i,c=0;
    printf("enter the numers: ");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=2;i<=sum/2;i++)
    {
        if(sum%i==0)
        {
        c=1;
        break;
        }   
    }
    if(c==1)
       printf("the number is not a prime");
    else
       printf("the number is a prime"); 
}