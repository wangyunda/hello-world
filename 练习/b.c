#include <stdio.h>

int main(void)
{
	int k = 3;
	int s[2];
	s[0] = k;
	k = s[1]*10;
	printf("%d\n",s[1]);
	
	return 0;	
}
