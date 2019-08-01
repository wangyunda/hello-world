#include <stdio.h>



int main(void)
{
	char str[]="hello";
	const char *p = str;
	char *const q = str;

	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	*p = 'm';
	puts(p);
	
	return 0;	
}
