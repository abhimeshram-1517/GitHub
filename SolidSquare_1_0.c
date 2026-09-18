#include <stdio.h>

int main()
{
    int r, c;

    for(r = 0; r <5; r++) //rows
    {
        for(c = 0; c <= 5; c++)  //cols
       
        if(r%2==0)
        {
            printf("1"); 
        }
         else
            printf("0");

        printf("\n");
    }

    return 0;
}
