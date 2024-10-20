#include<stdio.h>
#include<string.h>
int main(void)
{
	char *str1="Borland International", *str2="Nation", *ptr;
	ptr=strstr(str1,str2);
	printf("The substring is:%s\n",ptr);
	return 0;
}