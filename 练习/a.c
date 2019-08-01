#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *itoa(int n,char *src)
{
    char *p = src;
    int lenth = 0;
    int temp = 0;

    lenth = strlen(p);
    printf("%d\n",lenth);
    while(n)
    {
        *p = n % 10 + '0';
        p ++;
        n = n / 10;
    }
    for(int i = 0;i < lenth / 2;i++)
    {
        temp = p[i];
        p[i] = p[lenth-i-1];
        p[lenth-1-i] = temp;
    }
    return p;
}



int main(void)
{
    char arr[10];
	char *p = NULL;
    p = itoa(123,arr);
    printf("%s\n",arr);
	printf("%s\n",p);


    return 0;
}
