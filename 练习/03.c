#include <stdio.h>


int main(void)
{
	char *s = "\ta\018bc";
	char str[5] = "good!";
	char *p = str;
	printf("%s\n",p);
	for(;*s!='\0';s++)
		printf("*");
	
	
	
	return 0;	
}
