#include<stdio.h>
#include<string.h>
int main(void)
{
	char *buf1="aaa", *buf2="bbb", *buf3="ccc";
	int ptr;
	ptr=strcmp(buf2,buf1);
	if (ptr>0)
	printf("Buffer 2 is greater than Buffer 1\n");
	else
	printf("Buffer 2 is less than Buffer 1\n");
	
	ptr=strcmp(buf2,buf3);
	if (ptr>0)
	printf("Buffler 2 is greater than Buffler 3\n");
	else
	printf("Buffler 2 is less than Buffler 3\n");
	return 0;
	
}