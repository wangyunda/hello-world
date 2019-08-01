#include <stdio.h>


int main(void)
{
	int m = 10;
	int n = 20;
	char *p = "%s,m=%d,n=%d\n";
	m*=n;
	printf(p,"m*=n",m,n);
	
	
	return 0;	
}
