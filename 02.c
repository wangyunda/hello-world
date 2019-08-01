#include <stdio.h>



int main(void)
{
	char arr[] = {1,2,3,4};
	char *p = arr;
	char *q = arr;
	*(p+2) = 5;

	for(int i = 0;i < 4;i++)
		printf("%d\n",arr[i]);
	printf("%s\n",arr);
	
	
	return 0;	
}
