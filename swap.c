#include<stdio.h>
void main()
{
 int a,b,c,temp,sum;
 int *p1,*p2;
 a=100;
 b=200;
 p1=&a;
 p2=&b;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
  printf("sum=%d\n",*p1+*p2);
  //printf("addr1=%p , addr2=%p",p1,p2);
}