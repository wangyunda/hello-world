#include <stdio.h>


int main(void)
{
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
		};
	
	

	int *p[3] = arr;


	printf("%d\n",arr);
	printf("%d\n",arr+1);
	printf("%d\n",*arr+1);
	printf("%d\n",*(arr+1));
	printf("%d\n",p);
	printf("%d\n",p+1);


	return 0;	
}
