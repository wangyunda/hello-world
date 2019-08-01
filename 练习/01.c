#include <stdio.h>


int main(void)
{
	int a = 7;
	int *p = &a;
	*p = 9;

	printf("%d\n",*p);
	
	
	return 0;	
}
