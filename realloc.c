#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	 char *ptr=(char*)malloc(10);
	strcpy(ptr,"programming");
    printf("%s, Addr=%u\n",ptr,ptr);
    ptr=(char*)realloc(ptr,20);
    strcat(ptr,"in c");
	printf("%s, Addr=%u\n",ptr,ptr);
}