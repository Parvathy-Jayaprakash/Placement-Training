#include<stdio.h>
int main()
{
    char str[10];
    int i,s=0,h=0;
    printf("enter the string: ");
    scanf("%s",str);
    for(i=0;i<10;i++)
    {
        if(str[i]='*')
        s++;
        else
        h++;
    }
    
    printf("validity is: ");
    scanf("%d",(s-h));
}