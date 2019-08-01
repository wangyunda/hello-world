#include <stdio.h>


void func(int x,int y,int *a,int *b)
{
    *a = x + y;
    *b = x - y;
}

int main(void)
{
    int a = 5;
    int b = 6;
    int c = 99;
    int d = 20;

    func(a,b,&c,&d);
    printf("%d %d \n",c,d);
    

    return 0;
}