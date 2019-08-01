#include <stdio.h>


int main(void)
{
    typedef union 
    {
        long i ;
        int k[5];
        char c;

        /* data */
    }data;

    struct date{
        int cat;
        data cow;
        double dog;
    };
    data max;
    printf("%ld\n",sizeof(struct date)+sizeof(max));
    printf("%ld\n",sizeof(max));
    
}