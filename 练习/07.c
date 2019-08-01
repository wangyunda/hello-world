#include <stdio.h>



char *func(char *s)
{
	char *q = "abcd";
	return q;	
	
}
int main(void)
{
	char *str = "hello";
	char *p = NULL;
	p = func(str);
	printf("%s\n",p);
	
	
	
	return 0;	
}
