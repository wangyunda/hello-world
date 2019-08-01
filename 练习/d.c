#include <stdio.h>
#include <string.h>



int main(void)
{
    int arr[] = {1,1,2,3,4,5};
    int buf[] = {1,2,3,4,5,1};
    int addr = 0;
    int size = 0;
    size = strlen(addr);


    for(int i = 0;i < size;i++)
    {
        if(arr[0] == buf[i])
            addr = i;
        for(int j = 0;j < size; j++,addr++)
        {
            if(addr == size)
                addr = 0;
            if(arr[j] != buf[addr])
                break;
        }
    }
}