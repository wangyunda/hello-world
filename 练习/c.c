#include <stdio.h>
#include <string.h>


int main(void)
{
    int arr[] = {1,1,3,4,5,5,8};
    int buf[] = {3,4,5,5,8,1,1};
    int temp = 0;
    int addr = 0;
    int size = 0;
    size = strlen(arr);
    int i, j;
    
   /* for (int i = 0; i < sizeof(arr);i++)
    {
        for(int j = 0;j < sizeof(arr);j++)
        {
            if(arr[i] == buf[j])
            {
               addr = i;
               addr ++;
               if(buf[])
            }
        }
    }
    printf("%d\n",temp);
    */
   for(i=0; i<size; i++) {
       if(arr[0] == buf[i]) {
           addr = i;
           for(j=0;j<size; j++, addr++) {
                if(addr == size)
                    addr = 0;
                if(arr[j] != buf[addr]) 
                    break;
           }
           if(j == size)
           return 1;
            else 
           return 0;


       }

   }



    return 0;
}