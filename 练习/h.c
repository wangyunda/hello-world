#include <stdio.h>


int main(void)
{
	union node_t{
		int a[5];
		char b;
		short c;
		
		
	};

	struct node_st{
		long x1;
		union node_t x2;;
		
	};

	int size = sizeof(union node_t);
	int len = sizeof(struct node_st);


	printf("%d %d\n",size,len);



	

	
	
	return 0;	
}
