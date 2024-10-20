#include<stdio.h>
int main(void)
{
	int c;
	while((c=getchar())!='\n')
	printf("%c",c);
	return 0;
}