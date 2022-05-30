#include <stdio.h>
#include <stdlib.h>

int i;

int main()
{
    for (i = 0; i < 99; i = i)
    {
            printf ("%i ", i);
    
        if (i < 70 && i > 29)
        {
            
                i = i + 5;
            
        }
 else 
        {
            i++;
            
        }
    

    } 
   


}